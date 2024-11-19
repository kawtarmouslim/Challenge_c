#include <stdio.h>

void echanger(int a, int b) {
    int d= a; 
    a = b;         
    b = d;     
    printf("Dans la fonction apres echange : a = %d, b = %d\n", a, b);
}

int main() {
   int a,b;
   printf("enter la valeur a :");
   scanf("%d",&a);
   printf("enter la valeur b:");
   scanf("%d",&b);
     printf("Avant Echange : a = %d, b = %d\n", a, b);
    echanger(a, b);
    return 0;
}
