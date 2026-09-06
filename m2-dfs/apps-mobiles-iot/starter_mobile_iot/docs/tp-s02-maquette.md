# TP S02 : l'écran principal du produit (maquette + pas-à-pas)

Objectif : construire l'écran d'accueil de VOTRE produit, uniquement par
composition de widgets. **Zéro logique** : des données en dur, de l'UI, rien
d'autre. (Ces données en dur deviendront l'état vivant dès demain matin.)

Le « produit » : une app catalogue. Le thème est libre (sneakers, jeux
vidéo, plantes, cafés de la ville, ce que vous voulez) : seule la
STRUCTURE de l'écran est imposée par la maquette.

## La maquette

```text
┌──────────────────────────────────────┐
│  Mon Catalogue                    ⚙  │  ← AppBar : titre + une action
├──────────────────────────────────────┤
│  ┌────────────────────────────────┐  │
│  │  👋  Bienvenue                 │  │  ← En-tête : carte pleine largeur,
│  │  12 articles · 3 favoris       │  │    fond coloré (thème), 2 lignes
│  └────────────────────────────────┘  │
│                                      │
│  Les articles                        │  ← Titre de section
│  ┌────────────────────────────────┐  │
│  │ ▣  Nom de l'article        ♡  │  │  ← Carte d'article, répétée :
│  │    sous-titre · 12,90 €        │  │    vignette, nom, sous-titre,
│  └────────────────────────────────┘  │    prix, icône favori
│  ┌────────────────────────────────┐  │
│  │ ▣  Nom de l'article        ♥  │  │
│  │    sous-titre · 8,50 €         │  │
│  └────────────────────────────────┘  │
│  ┌────────────────────────────────┐  │
│  │ ▣  …                           │  │  ← Au moins 6 articles, la liste
│  └────────────────────────────────┘  │    SCROLLE
└──────────────────────────────────────┘
```

Contraintes précises (c'est la grille de correction) :

1. L'AppBar affiche le nom de VOTRE produit + une icône d'action (inerte)
2. L'en-tête est une carte pleine largeur, colorée par le thème, avec un
   compte d'articles et de favoris (en dur, on assume)
3. Chaque article est une carte : vignette (une `Icon` ou un emoji suffit),
   nom, sous-titre, prix, icône favori (2 ou 3 articles déjà « favoris »)
4. La liste contient au moins 6 articles EN DUR et scrolle
5. La carte d'article est UN widget à vous (`CarteArticle`), utilisé par la
   liste : la composition, c'est ça

Approfondissement : le même écran, responsive tablette (2 colonnes au-delà
de 600 px de large, `LayoutBuilder`).

## Profil React/Vue : les correspondances

Refais-le sans tes réflexes JSX et note les écarts. Pour t'orienter :
composant → widget · props → paramètres du constructeur · `map()` sur un
tableau → `ListView.builder` · CSS flex → `Row`/`Column` + `Expanded` ·
`className` → rien, le style EST du widget (`Padding`, `Card`, `TextStyle`).

## Profil découverte : le pas-à-pas

Chaque étape compile : sauvegarde et hot reload à chaque fois.

1. **La donnée** : en haut de ton fichier, une classe `Article` (nom,
   sousTitre, prix, favori) et une liste `articles` de 6 entrées en dur
   ```dart
   class Article {
     const Article(this.nom, this.sousTitre, this.prix, {this.favori = false});
     final String nom;
     final String sousTitre;
     final double prix;
     final bool favori;
   }

   const articles = [
     Article('Nom 1', 'sous-titre', 12.90, favori: true),
     // … 5 autres
   ];
   ```
2. **Le squelette** : dans `lib/ecrans/accueil.dart`, remplace le corps du
   `Scaffold` par une `Column` avec trois enfants provisoires :
   `Text('en-tête')`, `Text('Les articles')`, `Expanded(child: Placeholder())`
3. **L'en-tête** : remplace le premier `Text` par une `Card` pleine largeur
   (`SizedBox(width: double.infinity, child: Card(...))`) contenant un
   `Padding` puis une `Column` de 2 `Text`. Couleur :
   `Theme.of(context).colorScheme.primaryContainer`
4. **La carte d'article** : crée un widget `CarteArticle` qui prend un
   `Article` et rend une `Card` avec un `ListTile` (`leading` : icône,
   `title` : nom, `subtitle` : sous-titre + prix, `trailing` : cœur plein
   si favori, vide sinon)
5. **La liste** : remplace le `Placeholder` par
   ```dart
   ListView.builder(
     itemCount: articles.length,
     itemBuilder: (context, i) => CarteArticle(article: articles[i]),
   )
   ```
6. **Finitions** : marges (`Padding` autour de la `Column`), titre de
   section en `textTheme.titleLarge`, et compare à la maquette

Bloqué plus de 10 min ? Main levée ou messagerie Twik.
