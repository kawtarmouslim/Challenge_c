#include<stdio.h>
int main(){
    int n;
    printf("Entere un nombre:");
    scanf("%d",&n);
    for ( int i = 1; i <=10; i++)
    {
        printf("%d\n",i*n);
    }
    
}