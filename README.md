# Projet Figures Géométriques

## Description

Ce projet implémente un programme en C++ pour représenter différentes figures géométriques telles que des triangles, des carrés, des rectangles et des cercles. Chaque classe calcule l'aire et le périmètre de sa figure respective.

## Fonctionnalités

- **Figure** : Classe de base abstraite représentant une figure géométrique avec des méthodes virtuelles pures pour afficher, calculer l'aire et le périmètre.
- **Triangle** : Classe représentant un triangle avec des méthodes pour calculer son aire et son périmètre.
- **Carre** : Classe représentant un carré avec des méthodes pour calculer son aire et son périmètre.
- **Rectangle** : Classe représentant un rectangle avec des méthodes pour calculer son aire et son périmètre.
- **Cercle** : Classe représentant un cercle avec des méthodes pour calculer son aire et son périmètre.
- **main.cpp** : Point d'entrée du programme qui utilise les classes pour créer et manipuler des figures géométriques.
- **Figures.hpp** : Fichier d'en-tête contenant la définition des classes.
- **Figures.cpp** : Fichier source contenant les implémentations des méthodes des classes.

## Installation

1. Clonez le dépôt :

```bash
git clone https://github.com/votre-utilisateur/projet-figures.git
cd projet-figures
```
Compilez le programme :
```bash
g++ main.cpp Figures.cpp -o figures
```
Utilisation

Incluez le fichier d'en-tête Figures.hpp dans votre programme C++.
Utilisez les classes Triangle, Carre, Rectangle et Cercle pour créer et manipuler des figures géométriques dans votre programme.
Remarque

Assurez-vous d'avoir un compilateur C++ compatible pour utiliser ces classes.
Respectez les bonnes pratiques de programmation et évitez les fuites de mémoire en gérant correctement les allocations et les désallocations de mémoire.
