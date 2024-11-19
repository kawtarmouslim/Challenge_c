 #include<stdio.h>>
 int main(){
    int t[5];
    printf("Entrer les nombre entier :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Nombre %d :",i+1);
        scanf("%d", &t[i]);
    }
    printf("les nombre inverse:\n" );
     for (int i = 4; i>=0; i--)
    {
      printf("%d \n",t[i]);
    }
    
 }