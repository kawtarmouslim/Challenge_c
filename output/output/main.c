#include <stdio.h>
#include <math.h>

int main() {
    int nombre, inverse;
    
   
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);
    
    
    int d1 = nombre % 10;               
    int d2 = (nombre / 10) % 10;         
    int d3 = (nombre / 100) % 10;        
    int d4 = (nombre / 1000) % 10;       
    int d5 = (nombre / 10000) % 10;      
    
   
    inverse = d1 * 10000 + d2 * 1000 + d3 * 100 + d4 * 10 + d5;

   
    printf("Le nombre inverse est : %d\n", inverse);
    
    return 0;
}
