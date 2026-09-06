# Apps mobiles & IoT (M2 DFS)

**Ton objet, ton app** : 13 séances du 07/09 au 14/10, un produit livré
bout-en-bout : capteur (simulé) → broker MQTT → app Flutter → historique,
défendu en démo live le 14/10.

## Ce que contient ce dossier

| Quoi | Quand ça sert |
|---|---|
| [`installation.md`](installation.md) | S01 : installer Flutter et de quoi lancer l'app |
| [`starter_mobile_iot/`](starter_mobile_iot/) | S01, jalon 0 : le projet de départ (et la maquette du TP S02 dans son dossier `docs/`) |
| [`starter-wokwi/`](starter-wokwi/) | S07 : le firmware ESP32 simulé qui publie en MQTT |
| [`projet/`](projet/) | S11 : consigne du projet, fiche de cadrage, modèle `SECURITE.md` |

## Les jalons (rappel de la grille annoncée en S01)

| Jalon | Quoi | Pts | Quand |
|---|---|---|---|
| J0 | le starter tourne sur TA machine | non noté (mais bloquant) | S01 |
| J1 | écran + view-model + test | 8 | S03 |
| J2 | APK signé installable | 8 | S06 |
| J3 | chaîne MQTT bout-en-bout | 8 | S08 |
| J4 | cadrage projet validé + repo initialisé | 6 | S11 |
| Livrable final | code + app + firmware + doc + sécurité | 30 | S13 |

Plus soutenance 20, soft skills 20, bonus approfondissement +5.

## Démarrer (jalon 0)

```bash
git clone https://github.com/ThomasFT3721/Cours-MDS.git
cd Cours-MDS/m2-dfs/apps-mobiles-iot/starter_mobile_iot
flutter pub get
flutter run
```

Le détail est dans le README du starter. Ensuite, ton travail vit dans TON
propre repo (créé au jalon J1), pas dans celui-ci.
