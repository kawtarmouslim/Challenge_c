#include<stdio.h>
int main(){
    char v;
    printf("Ecrire le cractere :");
    scanf("%c",&v);
    switch (v)
    {
    case 'a':
            printf("la lettre voyelle");
            break;
    case 'e':
            printf("la lettre voyelle");
            break;

    case 'i':
            printf("la lettre voyelle");
            break;
    case 'o':
            printf("la lettre voyelle");
            break;
    case 'u':
            printf("la lettre voyelle");
            break;
    case 'y':
            printf("la lettre voyelle");
            break;                        

    default:
      printf("lettre sans voyelle");
            
        break;
    }
}