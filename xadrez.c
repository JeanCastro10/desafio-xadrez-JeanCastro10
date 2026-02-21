#include <stdio.h>

int main(){
    
    int bispo = 5;
    int torre = 5; 
    int rainha = 8;
    int b;
    int t = 1;
    int r = 1;
    
    printf("BISPO: 5 casas na diagonal superior direita\n");
    for ( b = 1; b <= bispo; b++)
    {
        printf("cima\n");
        printf("direita\n");
    }
    
    printf("TORRE: 5 casas para a direita\n");

    while (t <= torre)
    {   
            printf("Direita\n");
        t++;
    }
    do
    {
        printf("esquerda\n");
        r++;
    } while (r <= rainha);
    
    
    

    



    return 0;
}

