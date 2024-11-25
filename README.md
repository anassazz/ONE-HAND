# ONE-HAND
# Gestionnaire de Tâches

Ce projet est une application en C permettant de gérer des tâches de manière simple et efficace. L'utilisateur peut ajouter, afficher, modifier, supprimer et filtrer des tâches en fonction de leur priorité.

## Fonctionnalités

- **Ajouter une tâche** : Ajouter une nouvelle tâche avec un titre, une description, une date d'échéance et une priorité.
- **Afficher les tâches** : Lister toutes les tâches enregistrées.
- **Modifier une tâche** : Mettre à jour les informations d'une tâche existante.
- **Supprimer une tâche** : Supprimer une tâche spécifique de la liste.
- **Filtrer par priorité** : Afficher uniquement les tâches ayant une priorité donnée (par exemple, `High` ou `Low`).

## Structure des Données

Le projet utilise deux structures principales :
- **`Date`** : Contient les informations sur le jour, le mois et l'année.
- **`Tache`** : Représente une tâche avec un titre, une description, une priorité et une date d'échéance.

## Organisation du Code

- **Menu principal** : L'utilisateur interagit avec l'application via un menu textuel.
- **Validation des entrées** : Vérifie que les dates fournies sont valides.
- **Tableau dynamique** : Les tâches sont stockées dans un tableau statique pouvant contenir jusqu'à 100 tâches.
  
## Utilisation
Lors de l'exécution, un menu interactif s'affiche permettant de sélectionner les différentes options. Par exemple :

=== Gestionnaire de Tâches ===
1. Ajouter une tâche
2. Afficher les tâches
3. Modifier une tâche
4. Supprimer une tâche
5. Filtrer les tâches par priorité
6. Quitter
Choisissez une option :

