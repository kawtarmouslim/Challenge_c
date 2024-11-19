#include<stdio.h>
int main(){
    int t[7];
    int max;
    int min;
 
    for (int i = 0; i < 7; i++)
    {
        printf("le nombre %d:",i+1);
        scanf("%d",&t[i]);
       
    }
    for (int i = 1; i < 7; i++) {
        if (t[i] > max) {
            max = t[i];
        }
        if (t[i] < min) {
            min = t[i];
        }
    }

    printf("Le plus grand nombre est : %d\n", max);
    printf("Le plus petit nombre est : %d\n", min);

    return 0;
}
       
    
    