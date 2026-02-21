#include <stdio.h>

int main(){
    
    //declarando variaveis 
    
    int bispo = 5, torre = 5, rainha = 8;
    int b;
    int t = 1;
    int r = 1;

    // ======= BISPO: 5 casas na diagonal superior direita =======
    // Diagonal = combinação de duas direções básicas por passo (Cima + Direita)
    
    printf("=====BISPO: 5 casas na diagonal superior direita=====\n");
    for ( b = 1; b <= bispo; b++)
    {
        printf("cima\n");
        printf("direita\n");
    }
    
    // ======= TORRE: 5 casas para a direita =======
    
    printf("=====TORRE: 5 casas para a direita=====\n");

    while (t <= torre)
    {   
            printf("Direita\n");
        t++;
    }   
    
    // ======= RAINHA: 8 casas para a esquerda =======
    printf("=====RAINHA: 8 casas para a esquerda=====\n");
    
    do
    {
        printf("Esquerda\n");
        r++;

    } while (r <= rainha);
    
      return 0;
}

