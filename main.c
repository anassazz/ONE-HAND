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