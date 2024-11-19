#include<stdio.h>
int insert(int t[] ,int T ){
    int position, v;
     printf("Entrer la valeur a inserer : ");
     scanf("%d",&v);

     printf("Entrer la position :");
     scanf("%d",&position);
     if (position < 0 || position > T)
     {
        printf("la posion invalid");
        return T;
     }
     for (int i = T; i > position; i--)
     {
       t[i]=t[i-1];
     }
     t[position]=v;
     return T+1;
}
int main(){
    int t[3],T=5;
    printf("Entrer la valeur : ");
    for (int i = 0; i < T; i++)
    {
         scanf("%d", &t[i]);
    }
     insert(t,T);
    printf("Tableau après insertion : ");
    for (int i = 0; i < T; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");
}