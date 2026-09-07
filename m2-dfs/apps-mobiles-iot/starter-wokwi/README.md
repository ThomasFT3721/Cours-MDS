# Starter Wokwi (S07) : ton capteur publie

Un ESP32 **simulé** (Wokwi) qui lit un DHT22 et publie température et
humidité en MQTT toutes les 5 secondes. Le firmware est vrai, le broker
est vrai : seul le silicium est simulé.

## Démarrer (TP S07)

1. Ouvre le lien du projet Wokwi partagé sur Twik → **Save a copy**
   (ton fork)
2. Dans `sketch.ino`, change UNE ligne :
   ```cpp
   const char* TOPIC_BASE = "m2/CHANGE-MOI"; // → m2/<ton-prenom>, ex. m2/alice
   ```
3. ▶️ Lance : le moniteur série doit afficher « WiFi… connecté » puis les
   publications
4. Vérifie TES messages dans le client WebSocket HiveMQ :
   https://www.hivemq.com/demos/websocket-client/ (se connecter,
   s'abonner à `m2/#`)

Le DHT22 se pilote à la souris pendant la simulation : clique dessus et
fais glisser la température.

## En S08 : bascule sur le broker du module

Trois lignes à changer (les identifiants arrivent en message privé Twik) :

```cpp
const char* BROKER = "mqtt.mds.developpe-mon-site.fr";
const char* UTILISATEUR = "equipe-XX"; // ton compte perso (le nom est technique)
const char* MOT_DE_PASSE = "…";
```

## Les règles du firmware (les seules)

1. **Tes topics restent sous ton préfixe** (`m2/<ton-prenom>` puis, dès
   S08, `mds/m2/equipe-XX`, ton compte perso : le broker refuse le reste de
   toute façon)
2. **Un message = une valeur numérique nue** (`22.5`, pas du JSON) : c'est
   ce que le pont d'historisation du module sait lire. Si tu publies autre
   chose, ton historique de S09 restera vide
3. Le reste est libre : capteurs, boutons, LED, plusieurs ESP32… étends
   le starter autant que tu veux

## Les fichiers d'ici

Si tu préfères recréer le projet à la main sur wokwi.com : `sketch.ino`
(le code), `diagram.json` (le câblage ESP32 + DHT22), `libraries.txt`
(les 2 librairies à ajouter au Library Manager).
