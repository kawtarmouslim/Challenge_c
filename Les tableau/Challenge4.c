#include<stdio.h>
#include <string.h>
int main(){
    char chaine [3][34];
    char c[34] ;
    int i  ;
    printf("Entrer les chaine de caractere : \n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s",&chaine[i]);
    }
     printf("entrer le chaine :");
     scanf("%s",&c);
     for (i = 0; i < 3; i++){
           if  (strcmp(chaine[i], c) == 0)
       break;
       }

     
       if (i<3)
         printf("La chaine %s  a la position %d.\n", c, i);
    else
        printf("Le chaine %s nest pas prrsent.\n", c);

    return 0;
       
 
     
    
}


  
