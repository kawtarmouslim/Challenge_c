#include<stdio.h>


int main() {
    int a; 
    printf("Entrez un nombre : ");
    scanf("%d", &a); 
    if (a % 2 == 0) {
        printf("Le nombre %d est pair.\n", a);
    } else {
        printf("Le nombre %d est impair.\n", a);
    }
    
    return 0;  
}

