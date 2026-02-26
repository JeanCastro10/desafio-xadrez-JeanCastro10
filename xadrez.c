#include <stdio.h>

void mover_torre (int casas){
    if (casas > 0)
    {    
        printf("direita\n");
        mover_torre (casas -1);
    }
}

void mover_rainha (int casas){
    if (casas > 0)
    {
         printf("Esquerda\n");
         mover_rainha (casas -1);
        }
}
void mover_bispo (int casas){
    if (casas > 0)
    {   
        printf("cima\n");
        printf("direita\n");
        mover_bispo(casas -1);
    }
    
}
            
int main(){
    
    //declarando variaveis 
    
    int cavalo = 1;

    // ======= BISPO: 5 casas na diagonal superior direita =======
    // Diagonal = combinação de duas direções básicas por passo (Cima + Direita)
    
    printf("\n=====BISPO: 5 casas na diagonal superior direita=====\n");
    mover_bispo (5);
    
    
    // ======= TORRE: 5 casas para a direita =======
    
    printf("\n=====TORRE: 5 casas para a direita=====\n");
    mover_torre (5);
    
    // ======= RAINHA: 8 casas para a esquerda =======
    
    printf("\n=====RAINHA: 8 casas para a esquerda=====\n");
    mover_rainha (8);
   
    //// =======Cavalo: 2 casa para baixo e 1 para a esquerda=======
    
    printf("\n=====Cavalo: 2 casa para baixo e 1 para a esquerda=====\n");   
        while (cavalo--)
         {
            for (int i = 1; i <= 2; i++ )
            {
                printf("Baixo\n");
            }
                printf("Esquerda\n");
         }
       
    return 0;
}

