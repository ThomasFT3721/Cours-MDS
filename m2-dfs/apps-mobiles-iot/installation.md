# Installation (S01)
Salut à tous 👋

Pour le premier cours du module **Apps mobiles & IoT** : vous allez construire et livrer une vraie app mobile connectée à un objet. On démarre fort : l'objectif est que l'app tourne sur VOTRE machine.

**1. Flutter** (le framework du module)
https://docs.flutter.dev/get-started/install : suivez le guide pour votre OS (Windows/Mac/Linux).

**2. Un éditeur, au choix**
- Android Studio (recommandé si vous partez de zéro : il installe aussi le SDK Android et l'émulateur) : https://developer.android.com/studio
- VS Code + l'extension Flutter (si vous l'utilisez déjà ; il faudra quand même le SDK Android via Android Studio)

**3. De quoi lancer l'app, au choix**
- **Un émulateur Android** (dans Android Studio : Device Manager → Create Device). Attention : il faut la virtualisation activée dans le BIOS et ~8 Go de RAM pour être confortable
- OU **votre téléphone Android** en USB : activez les options développeur (7 taps sur « Numéro de build ») puis le « Débogage USB ». C'est même la meilleure option si votre PC est modeste. Il faut un vrai câble données (pas un câble de charge premier prix)
- iPhone : l'app ne s'installera pas dessus (il faut un Mac pour compiler iOS, on l'assume) : prévoyez l'émulateur
- **Vous êtes sur Mac** : même installation que tout le monde (Flutter + Android Studio), l'émulateur Android y tourne très bien. Le module cible Android pour tous (les livrables sont des APK) ; si vous avez un iPhone, le lancer dessus via Xcode est possible en bonus perso, mais rien dans le module ne l'exige

**4. Le test qui dit si vous êtes prêts**

```bash
flutter doctor
```

Si tout est vert (ou qu'il ne râle que sur Chrome/Visual Studio, on s'en fiche) : c'est gagné. S'il reste du rouge : levez la main ou postez le message d'erreur sur la messagerie, on règle ça pendant l'atelier.

Pas d'inquiétude si vous bloquez : rien de tout ça n'est noté, et l'atelier est là pour ça.
