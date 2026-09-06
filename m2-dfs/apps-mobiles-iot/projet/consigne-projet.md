# Le projet : la consigne officielle (S11)

*(Tout ce qui suit a été dit en séance ce jeudi. Ceci est la référence écrite : en cas de doute, c'est ce document qui fait foi.)*

### Le produit attendu

En binôme (ou trinôme validé), vous livrez **une chaîne IoT complète qui est un produit, pas un TP** :

**capteur (Wokwi ou capteurs du téléphone) → broker MQTT → app Flutter → historique**

Votre app des jalons J1 à J3 est le point de départ légitime : le projet réutilise tout ce qui existe. Repartir de zéro est autorisé mais jamais rentable.

Broker du module : `mqtt.mds.developpe-mon-site.fr`. Chaque équipe publie sous SON préfixe : `mds/m2/equipe-XX/…` (XX = votre numéro, ex. `mds/m2/equipe-03/salon/temperature`). Vos identifiants arrivent en message privé : ils ne donnent accès qu'à votre préfixe. Le broker public HiveMQ reste autorisé pour bricoler, pas pour la démo.

### Le livrable : 5 pièces, un repo unique

Tout vit dans le repo Git de l'équipe, **poussé avant le mercredi 14/10, 9h** (pas de dépôt en séance) :

1. **Code** : app Flutter + firmware (Wokwi), repo propre, **CI verte, APK signé en artefact**
2. **`SECURITE.md`** : les 6 exigences ETSI, à jour de ce que vous avez VRAIMENT fait (la grille distribuée en S10 est le modèle)
3. **Doc technique** : le schéma de la chaîne + 3 choix argumentés (pourquoi ce protocole, ce stockage, cette lib…)
4. **Scénario de démo** écrit : étapes, données, plan B si le WiFi trahit
5. **La fiche de cadrage** validée en S11 (elle reste dans le repo, elle date votre engagement)

### Le barème (rappel, aucun changement)

| Élément | Points | Statut |
|
