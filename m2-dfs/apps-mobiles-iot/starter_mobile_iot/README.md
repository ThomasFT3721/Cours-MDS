# Starter : Apps mobiles & IoT (M2 DFS)

Le point de départ du module. Il compile tel quel, les tests sont verts, et
toutes les dépendances du module sont déjà déclarées (versions figées par
`pubspec.lock` : ne le supprime pas).

## Jalon 0 (S01) : « l'app tourne »

1. Clone ce repo
2. `flutter doctor` : tout au vert
3. `flutter run` sur l'émulateur OU ton téléphone Android (USB + débogage
   activé)
4. Ouvre `lib/ecrans/accueil.dart`, modifie `titreAccueil`, sauvegarde :
   le hot reload met à jour l'écran. C'est gagné.

Non noté, mais bloquant : tout le module construit sur ce projet.

## Vérifier que tout va bien

```bash
flutter test      # les tests doivent être verts
flutter analyze   # zéro problème
```

## La visite du propriétaire

- `lib/main.dart` : le point d'entrée (le `ProviderScope` de Riverpod est
  déjà posé)
- `lib/theme.dart` : le thème, un seul endroit pour les couleurs
- `lib/ecrans/` : un fichier par écran (il n'y en a qu'un aujourd'hui,
  ça ne va pas durer)
- `test/` : les tests (un widget test d'exemple)
- `docs/` : les supports de TP au fil des séances

## Les dépendances embarquées (tu t'en serviras toutes)

| Paquet | Séance | Pour quoi |
|---|---|---|
| `flutter_riverpod` | S03 | L'état et les view-models |
| `go_router` | S04 | La navigation par routes |
| `shared_preferences` | S04 | La persistance qui survit au kill |
| `http` | S05 | Parler à l'API du module |
| `mqtt_client` | S08 | Ton app s'abonne au broker |
| `fl_chart` | S09 | La courbe d'historique |
