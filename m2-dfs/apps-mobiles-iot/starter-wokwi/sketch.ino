// Starter Wokwi du module Apps mobiles & IoT (M2 DFS)
// Un ESP32 simulé lit un DHT22 et publie en MQTT. Il compile tel quel :
// change UNIQUEMENT le topic (ligne TOPIC_BASE), lance, et vérifie tes
// messages dans le client WebSocket HiveMQ.

#include <WiFi.h>
#include <PubSubClient.h>
#include <DHT.h>

// ── À CHANGER : ton préfixe de binôme (convention : m2/<binome>) ──────
const char* TOPIC_BASE = "m2/CHANGE-MOI";

// ── Broker (S07 : HiveMQ public ; S08 : le Mosquitto du module) ───────
const char* BROKER = "broker.hivemq.com";
const int PORT_BROKER = 1883;
const char* UTILISATEUR = "";  // S08 : ton identifiant d'équipe
const char* MOT_DE_PASSE = ""; // S08 : reçu en message privé Twik

// ── Matériel simulé ───────────────────────────────────────────────────
#define BROCHE_DHT 15
DHT dht(BROCHE_DHT, DHT22);

WiFiClient reseau;
PubSubClient mqtt(reseau);

const unsigned long PERIODE_MS = 5000;
unsigned long derniereMesure = 0;

void connecterWiFi() {
  Serial.print("WiFi");
  WiFi.begin("Wokwi-GUEST", "", 6);
  while (WiFi.status() != WL_CONNECTED) {
    delay(300);
    Serial.print(".");
  }
  Serial.println(" connecté");
}

void connecterMqtt() {
  while (!mqtt.connected()) {
    String idClient = String(TOPIC_BASE) + "-" + String(random(0xffff), HEX);
    Serial.print("MQTT... ");
    bool ok = (strlen(UTILISATEUR) > 0)
        ? mqtt.connect(idClient.c_str(), UTILISATEUR, MOT_DE_PASSE)
        : mqtt.connect(idClient.c_str());
    if (ok) {
      Serial.println("connecté au broker");
    } else {
      Serial.print("échec, code ");
      Serial.print(mqtt.state());
      Serial.println(", nouvel essai dans 2 s");
      delay(2000);
    }
  }
}

void publier(const char* grandeur, float valeur) {
  String topic = String(TOPIC_BASE) + "/" + grandeur;
  String message = String(valeur, 1);
  mqtt.publish(topic.c_str(), message.c_str());
  Serial.print(topic);
  Serial.print(" -> ");
  Serial.println(message);
}

void setup() {
  Serial.begin(115200);
  dht.begin();
  connecterWiFi();
  mqtt.setServer(BROKER, PORT_BROKER);
}

void loop() {
  if (!mqtt.connected()) connecterMqtt();
  mqtt.loop();

  unsigned long maintenant = millis();
  if (maintenant - derniereMesure >= PERIODE_MS) {
    derniereMesure = maintenant;
    float temperature = dht.readTemperature();
    float humidite = dht.readHumidity();
    if (isnan(temperature) || isnan(humidite)) {
      Serial.println("Lecture DHT22 ratée, on retentera");
      return;
    }
    publier("temp", temperature);
    // TP S07 : la 2e grandeur sur son propre topic est déjà là,
    // à toi d'en ajouter d'autres (le bouton de l'approfondissement...)
    publier("hum", humidite);
  }
}
