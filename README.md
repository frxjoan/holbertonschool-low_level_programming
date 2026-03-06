# Holberton School — Low Level Programming (C)

Ce dépôt regroupe les projets C réalisés dans le cadre du module **Low Level Programming**.
L’objectif est de maîtriser les fondamentaux du langage C, les structures de données, la gestion mémoire et les interactions bas niveau avec le système.

## Objectifs pédagogiques

- Écrire du C propre, lisible et robuste
- Comprendre la compilation et l’édition de liens
- Manipuler pointeurs, tableaux, chaînes et structures
- Gérer la mémoire dynamique (`malloc`, `free`)
- Implémenter des structures de données classiques
- Utiliser les appels système de base (fichiers)

## Projets du dépôt

| Dossier | Thème principal | Compétences travaillées |
|---|---|---|
| `hello_world/` | Premiers pas en C | Préprocesseur, compilation, `printf`/`puts` |
| `variables_if_else_while/` | Contrôle de flux | Variables, conditions, boucles |
| `functions_nested_loops/` | Fonctions de base | Prototypes, boucles imbriquées, logique simple |
| `more_functions_nested_loops/` | Approfondissement fonctions | Exercices de logique et affichage |
| `pointers_arrays_strings/` | Mémoire et chaînes | Pointeurs, tableaux, manipulation de chaînes |
| `recursion/` | Récursivité | Fonctions récursives et cas de base |
| `malloc_free/` | Allocation dynamique I | `malloc`, `free`, duplication/concaténation |
| `more_malloc_free/` | Allocation dynamique II | Reallocation, conversion, gestion d’erreurs |
| `argc_argv/` | Arguments du programme | `main(int argc, char **argv)`, parsing simple |
| `structures_typedef/` | Structures C | `struct`, `typedef`, organisation de données |
| `function_pointers/` | Pointeurs de fonctions | Callbacks, table de dispatch |
| `variadic_functions/` | Fonctions variadiques | `stdarg.h`, listes d’arguments variables |
| `singly_linked_lists/` | Listes simplement chaînées | Création, parcours, insertion, libération |
| `doubly_linked_lists/` | Listes doublement chaînées | Navigation bidirectionnelle, insertion/suppression |
| `hash_tables/` | Tables de hachage | Fonction de hash, indexation, collisions |
| `file_io/` | Entrées/sorties fichiers | `open`, `read`, `write`, `close`, permissions |
| `holbertonschool-printf/` | Projet `_printf` | Parsing de format, modularité, sortie formatée |
| `holbertonschool-sorting_algorithms/` | Tri en C | Complexité, implémentations de tris |
| `holbertonschool-binary_trees/` | Arbres binaires | Parcours, profondeur, insertion, ancêtres |
| `holbertonschool-low_level_programming/` | Dossier annexe | Contenu complémentaire/miroir selon l’environnement |

## Prérequis

- OS Linux (ou WSL)
- `gcc`
- `make` (selon projet)

Compilation type :

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o program
```

## Lancer un exercice

```bash
cd nom_du_projet
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o run
./run
```

## Organisation

Chaque dossier est un mini-projet autonome avec :

- ses fichiers source (`*.c`)
- ses headers (`*.h`) quand nécessaire
- un `README.md` local (qualité variable selon l’exercice)

## Auteur

Projet académique réalisé dans le cursus Holberton School.
