#include<stdio.h>
#include <stdbool.h>
bool isPremier(int n){
    if (n<=1)
    { 
        return false;
    }
   for (int i = 2; i <n; i++)
   {
       if (n %  i == 0 )
       {
          return false;
       }
       else
         return true;
   }
}
bool divededby(int a,int n){
    int result;
   if (n == 0) { 
        printf("Erreur : division par zéro\n");
        return 0;
    }
     result= a / n;
     printf("Le resultat de la division est : %d\n", result);
      return isPremier(result);
}
int main(){
    int n;
    int a;
    printf("Entere le num :");
    scanf("%d",&n);
     printf("Entere le a :");
    scanf("%d",&a);
 if (isPremier(n))
    {
        printf("Le nombre premier : %d",n);
    }else
    
    printf("Le nombre  NOM premier : %d",n);


       if (divededby(n, a)) {
        printf("Le rEsultat est un nombre premier.\n");
    } else {
        printf("Le resultat est pas un nombre premier.\n");
    }
}