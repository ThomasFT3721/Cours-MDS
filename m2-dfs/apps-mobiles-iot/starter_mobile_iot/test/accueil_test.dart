import 'package:flutter_test/flutter_test.dart';
import 'package:starter_mobile_iot/main.dart';

void main() {
  testWidgets("l'écran d'accueil s'affiche", (tester) async {
    await tester.pumpWidget(const AppMobileIot());

    expect(find.text('Ça tourne.'), findsOneWidget);
  });
}
