#include <stdio.h>

int main() {
    int n, p, i;

    printf("Entrez un nombre : ");
    scanf("%d", &n);
    printf("Les nombres premiers sont : ");
    for (p = 2; p <= n; p++) {
        int premier = 1;  
        for (i = 2; i < p; i++) {
            if (p % i == 0) {
                premier = 0;  
                break;
            }
        }
        if (premier) {
            printf("%d ", p);
        }
    }
    return 0;
}
