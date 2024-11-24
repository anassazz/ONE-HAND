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
// Fonction pour vérifier si une date est valide
int est_date_valide(int jour, int mois, int annee) {
    // Vérifier si le mois est valide
    if (mois < 1 || mois > 12) {
        return 0; // Mois invalide
    }
    // Nombre de jours dans chaque mois (en supposant une année non bissextile)
    int jours_par_mois[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Vérification de l'année bissextile (ajout de 1 jour en février si nécessaire)
    if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
        jours_par_mois[1] = 29; // Février a 29 jours
    }
    // Vérifier si le jour est valide pour le mois donné
    if (jour < 1 || jour > jours_par_mois[mois - 1]) {
        return 0; // Jour invalide
    }
    // Si tout est valide
    return 1;
}
 
 // Fonction pour ajouter une tâche
void ajouter_tache() {
    if (nb_taches >= 100) {
        printf("La liste des tâches est pleine.\n");
        return;
    }

    Tache nouvelle_tache;

    // Titre
    printf("Titre : ");
    scanf("%49s", nouvelle_tache.titre);

    // Description
    printf("Description : ");
    scanf(" %[^\n]", nouvelle_tache.description); // Permet de lire jusqu'à un '\n'

    // Date d'échéance
    printf("Date d'échéance :\n");
    do {
        printf("Jour: ");
        scanf("%d", &nouvelle_tache.date_echeance.jour);
        printf("Mois: ");
        scanf("%d", &nouvelle_tache.date_echeance.mois);
        printf("Année: ");
        scanf("%d", &nouvelle_tache.date_echeance.annee);

        if (!est_date_valide(nouvelle_tache.date_echeance.jour, nouvelle_tache.date_echeance.mois, nouvelle_tache.date_echeance.annee)) {
            printf("Date invalide, veuillez réessayer.\n");
        }
    } while (!est_date_valide(nouvelle_tache.date_echeance.jour, nouvelle_tache.date_echeance.mois, nouvelle_tache.date_echeance.annee));

    // Fonction pour afficher toutes les tâches
void afficher_taches() {
    if (nb_taches == 0) {
        printf("Aucune tâche à afficher.\n");
        return;
    }

    for (int i = 0; i < nb_taches; i++) {
        printf("\nTâche %d :\n", i + 1);
        printf("Titre : %s\n", taches[i].titre);
        printf("Description : %s\n", taches[i].description);
        printf("Date d'échéance : %d/%d/%d\n", taches[i].date_echeance.jour, taches[i].date_echeance.mois, taches[i].date_echeance.annee);
        printf("Priorité : %s\n", taches[i].priorite);
    }
}