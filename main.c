#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structures pour gérer les dates et les tâches
typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct {
    char titre[50];
    char description[255];
    char priorite[10]; // "High" ou "Low"
    Date date_echeance;
} Tache;
// Fonction pour afficher le menu principal
void afficher_menu() {
    printf("\n=== Gestionnaire de Tâches ===\n");
    printf("1. Ajouter une tâche\n");
    printf("2. Afficher les tâches\n");
    printf("3. Modifier une tâche\n");
    printf("4. Supprimer une tâche\n");
    printf("5. Filtrer les tâches par priorité\n");
    printf("6. Quitter\n");
    printf("Choisissez une option : ");
}