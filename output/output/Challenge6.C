#include<stdio.h>
int main(){
    int A;
    int choix;
    double Resulte;
    printf("Convertir Annee en ");
    printf("1.Mois");
    printf("2.Jours");
    printf("3.Heure");
    printf("1.Minutes");
    printf("4.Seconde");
    printf("Entrer votre choix :");
    scanf("%d",&choix);
    printf("Enter l'annee :");
    scanf("%d",&A);
    switch (choix)
    {
    case 1:
       Resulte=A*12;
       printf("le mois est :%.2lf mois",Resulte);
        break;
         case 2:
         
       Resulte= A * 365;
       printf("le JOURS est :%.2lf J",Resulte);
        break;
    case 3:
       Resulte=A* 365 * 24;
       printf("le heure est :%.2lf h",Resulte);
        break;
     case 4:
       Resulte=A* 365 * 24 * 60;
       printf("le min est :%.2lf min",Resulte);
        break;
     case 5:
       Resulte=A* 365 * 24 * 60 * 60;
       printf("le seconde est :%.2lf s",Resulte);
        break;
    default:
        break;
    }

    

    

    
}