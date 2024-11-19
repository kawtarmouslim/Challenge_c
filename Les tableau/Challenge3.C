#include <stdio.h>

int main() {
    int tableau[8], nombre, i;

    printf("Entrez 8 nombres : \n ");
    for (i = 0; i < 8; i++) scanf("%d", &tableau[i]);

    printf("Entrez un nombre a rechercher : ");
    scanf("%d", &nombre);

    for (i = 0; i < 8; i++)
        if (tableau[i] == nombre) break;

    if (i < 8)
        printf("Le nombre %d est a la position %d.\n", nombre, i);
    else
        printf("Le nombre %d nest pas prrsent.\n", nombre);

    return 0;
}
