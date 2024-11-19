#include<stdio.h>
int main() {
    int n, i;
    printf("Entrez un entier: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d n'est pas un nombre premier.\n", n);
    }

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("%d n'est pas un nombre premier.\n", n);
        }
    }

    printf("%d est un nombre premier.\n", n);

}