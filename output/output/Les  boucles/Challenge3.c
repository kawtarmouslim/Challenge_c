#include <stdio.h>

int main() {
    int nombre;
    int somme = 0;
    int maximum = 0;
    int tailleListe;

    printf("Combien d'entiers voulez-vous entrer dans chaque liste ? : ");
    if (scanf("%d", &tailleListe) != 1 || tailleListe <= 0) {
        printf("Veuillez entrer un nombre entier positif valide.\n");
        return 1;
    }

    printf("Entrez la liste d'entiers positifs :\n");
    for (int i = 1; i <= tailleListe; ++i) {
        if (scanf("%d", &nombre) != 1) {
            printf("Entrée invalide, veuillez entrer un entier.\n");
            return 1;
        }

        if (nombre >= 0 && nombre < 100 && nombre % 10 == 0) {
            somme += nombre;
            if (nombre > maximum) {
                maximum = nombre;
            }
        } else {
            printf("Nombre ignoré : %d\n", nombre);
        }
    }

    printf("Somme des éléments : %d\n", somme);
    printf("Maximum des éléments : %d\n", maximum);

    return 0;
}
