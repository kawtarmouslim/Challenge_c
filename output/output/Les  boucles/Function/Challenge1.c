#include <stdio.h>

int add(int a, int b ) {
    int s;
    s=a+b;
    return s;
}

int main() {
    int a, b, result;

    printf("Entrez le nombre a: ");
    scanf("%d", &a);
    printf("Entrez le nombre b: ");
    scanf("%d", &b);
    result = add(a, b);
    printf("L'addition de %d + %d = : %d\n", a, b, result);

    return 0;
}