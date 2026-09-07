import 'package:flutter/material.dart';

/// Jalon 0 : modifie [titreAccueil], sauvegarde, et regarde le hot reload
/// faire son travail. C'est gagné.
const String titreAccueil = 'Starter Mobile & IoT';

class EcranAccueil extends StatelessWidget {
  const EcranAccueil({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(title: const Text(titreAccueil)),
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            const Icon(Icons.rocket_launch, size: 64),
            const SizedBox(height: 16),
            Text('Yooofdjghkudfhguio', style: Theme.of(context).textTheme.headlineMedium),
            const SizedBox(height: 8),
            const Text('Prochaine étape : modifie le titre de cet écran.'),
          ],
        ),
      ),
    );
  }
}
