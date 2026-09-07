# SECURITE.md : notre chaîne face à ETSI EN 303 645

Élève :
Chaîne auditée : capteur … → broker … → app …
Date de la passe :

Pour chaque exigence : un statut (✅ conforme / 🔴 à corriger / ⚪ non
applicable) et UNE phrase de preuve ou de plan. Une case vide vaut un 🔴.

## 1. Pas de mot de passe par défaut universel

- Le broker demande-t-il TES identifiants à toi ?
- Un secret de test type `admin/admin` traîne-t-il quelque part ?
- Statut :
- Preuve ou plan :

## 2. Mises à jour possibles et signées

- L'APK est-il signé (pas la clé de debug) ?
- Le firmware peut-il être re-flashé ? Comment saurait-on qu'une
  mise à jour est légitime ?
- Statut :
- Preuve ou plan :

## 3. Secrets stockés de façon sûre

- Identifiants broker, clés, tokens : où vivent-ils ? (en dur dans le
  code = 🔴 immédiat)
- Côté app : stockage sécurisé ou SharedPreferences en clair ?
- Statut :
- Preuve ou plan :

## 4. Communications chiffrées

- La connexion au broker passe-t-elle en TLS (port 8883 ou WSS) ?
- Les appels réseau de l'app sont-ils tous en HTTPS ?
- Statut :
- Preuve ou plan :

## 5. Surface d'attaque minimisée

- Tes topics sont-ils restreints à ton préfixe (pas de
  wildcard d'abonnement inutile) ?
- L'app demande-t-elle UNIQUEMENT les permissions dont elle se sert ?
- Des ports ou services inutiles sont-ils ouverts quelque part ?
- Statut :
- Preuve ou plan :

## 6. Données personnelles : minimisées, effaçables

- Quelles données de votre chaîne concernent une personne ? (un capteur
  de présence ou un GPS EST une donnée personnelle)
- Combien de temps l'historique est-il gardé, et peut-on l'effacer ?
- Statut :
- Preuve ou plan :

## Le point rouge corrigé en séance (obligatoire)

- Exigence concernée :
- Ce qu'on a changé (commit à l'appui) :
