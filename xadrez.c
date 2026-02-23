#include <stdio.h>

int main(){
    
    //declarando variaveis 
    
    int bispo = 5, torre = 5, rainha = 8, cavalo = 1;
    int b;
    int t = 1;
    int r = 1;
    

    // ======= BISPO: 5 casas na diagonal superior direita =======
    // Diagonal = combinação de duas direções básicas por passo (Cima + Direita)
    
    printf("\2=====BISPO: 5 casas na diagonal superior direita=====\n");
    for ( b = 1; b <= bispo; b++)
    {
        printf("cima\n");
        printf("direita\n");
    }
    
    // ======= TORRE: 5 casas para a direita =======
    
    printf("\n=====TORRE: 5 casas para a direita=====\n");

    while (t <= torre)
    {   
            printf("Direita\n");
        t++;
    }   
    
    // ======= RAINHA: 8 casas para a esquerda =======
    printf("\n=====RAINHA: 8 casas para a esquerda=====\n");
    
    do
    {
        printf("Esquerda\n");
        r++;

    } while (r <= rainha);
    
    //// ======= CAVALO 2 casas para cima e 1 para a direita =======
    printf("\n=====Cavalo: 8 casas para a esquerda=====\n");   
        while (cavalo--)
     {
        for (int i = 0; i <= 2; i++ )
        {
            printf("Baixo\n");
        }
            printf("Esquerda\n");



     }
    
    
    return 0;
}

