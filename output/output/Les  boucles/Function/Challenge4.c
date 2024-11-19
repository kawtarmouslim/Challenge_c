#include<stdio.h>>

int divededby(int a,int n){
   if (n == 0) { 
        printf("Erreur : division par zéro\n");
        return 0;
    }
    return a / n;
}
int main(){
int n,a,s;
printf("Entrer la valeur de a:");
scanf("%d",&a);
printf("Entrer la valeur de n :");
scanf("%d",&n);
s=divededby(a,n);
printf("Division de %d / %d = : %d\n", a, n, s);


}