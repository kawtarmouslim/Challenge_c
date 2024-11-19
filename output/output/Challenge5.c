#include<stdio.h>
#include <math.h>
int main(){
    double a,b,c,x1,x2,R;
    a!=0;
    
   printf("Entrer la valeur de a,b,c pour l'equation ax^2 + bx + c = 0 :\n");
   scanf("%lf %lf %lf", &a, &b, &c);
   R=b*b-4*a*c;
   if (R>0)
   {
     x1 = (-b + sqrt(R)) / (2 * a);
     x2 = (-b - sqrt(R)) / (2 * a);
    printf("Equation a deux solution reels : x1=%;2lf ET x2 =%.2lf",x1,x2);
   
   }
   else if (R==0)
   {
       x1 = -b / (2 * a);
    printf("Equation a deux solution reels : x1=%;2lf ",x1);
   }
   else
      printf("Equation pas solution");
   
   
    

}