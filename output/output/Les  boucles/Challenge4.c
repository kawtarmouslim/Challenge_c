#include <stdio.h>

int main() {
    int nombre, inverse = 0;

    printf("Entrez un entier : ");
    scanf("%d", &nombre);
    while (nombre != 0) {
        int chiffre = nombre % 10;
        inverse = inverse * 10 + chiffre;
        nombre /= 10;
    }
    printf("entier inversEV est : %d\n", inverse);

    return 0;
}
