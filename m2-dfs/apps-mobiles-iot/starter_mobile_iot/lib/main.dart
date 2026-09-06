import 'package:flutter/material.dart';
import 'package:flutter_riverpod/flutter_riverpod.dart';

import 'ecrans/accueil.dart';
import 'theme.dart';

void main() {
  runApp(const ProviderScope(child: AppMobileIot()));
}

class AppMobileIot extends StatelessWidget {
  const AppMobileIot({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Starter Mobile & IoT',
      theme: themeDuModule,
      home: const EcranAccueil(),
    );
  }
}
