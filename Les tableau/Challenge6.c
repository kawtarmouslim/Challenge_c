#include<stdio.h>
void Afficher_carre(int t[] ,int N){
for (int i = 0; i < N; i++)
{
   printf("%d^2 = %d \n",t[i],t[i]*t[i]);
}

}
void affiche_carre(int n){
   printf("%d^2 = %d \n",n,n*n);
}

int main(){
  int t[4];
   int N=4;
   for (int i = 0; i < 5; i++)
   {
     printf("Entier %d : ", i + 1);
        scanf("%d", &t[i]);
   
}
Afficher_carre(t, N);
  printf("\nCarres des elements  :\n");
  for (int i = 0; i < N; i++)
  {
    affiche_carre(t[i]);
  }
  
}