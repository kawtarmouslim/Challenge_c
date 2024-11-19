#include<stdio.h>
int main(){
    int t[10];
    int s=0;
    double m;
    printf("Entrer les entiere :");
    for (size_t i = 0; i < 10; i++)
    {
        printf("le nombre %d:",i+1);
        scanf("%d",&t[i]);
    }
     for (size_t i = 0; i < 10; i++)
    {
        s +=t[i];
       
    }
     printf(" S= %d",s);
      m = (double)s / 10;


      printf("m= %f",m);
}