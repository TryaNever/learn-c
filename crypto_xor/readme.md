## Exercice : Chiffrement par Masque Jetable (XOR Bit à Bit)## Objectif

Créer un programme en C capable de chiffrer et de déchiffrer un message de 4 caractères. Pour cela, vous allez utiliser l'opérateur de bits XOR (^).
Propriété clé du XOR : Si A ^ Clef = Code, alors Code ^ Clef = A. On utilise la même logique pour encoder et décoder.

## Instructions## 1. Initialisation des données

Dans votre fonction main, déclarez et initialisez trois tableaux de caractères (char) de taille 4 :

- message_original : Initialisé avec 4 lettres de votre choix (ex: {'T', 'E', 'S', 'T'}).
- clef_secrete : Initialisé avec 4 autres lettres (ex: {'K', 'E', 'Y', 'S'}).
- message_chiffre : Un tableau vide pour stocker le résultat.

## 2. Étape 1 : Le Chiffrement

- Créez une boucle (for ou while) pour parcourir les indices de 0 à 3.
- Pour chaque index, appliquez l'opérateur ^ entre la lettre de message_original et celle de clef_secrete.
- Stockez le résultat dans message_chiffre.
- Affichez le contenu de message_chiffre caractère par caractère avec printf et le format %c. Note : Certains caractères chiffrés peuvent être invisibles ou bizarres, c'est tout à fait normal.

## 3. Étape 2 : Le Déchiffrement

- Créez une seconde boucle pour parcourir à nouveau les indices de 0 à 3.
- Appliquez l'opérateur ^ entre la lettre de message_chiffre et celle de clef_secrete.
- Affichez directement le résultat à l'écran. Vous devez voir réapparaître votre message d'origine en clair.

## Résultat attendu dans la console (Exemple)

Message chiffré : [caractères spéciaux ou invisibles]
Message déchiffré : TEST
