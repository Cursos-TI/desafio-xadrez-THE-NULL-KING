#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void bispo(int casas){ // Função recursiva do movimento do bispo
    for(casas; casas > 0; casas--){
        printf("Cima ");
        for(int casash = 1; casash > 0; casash--){
            printf("Direita\n");
        }
        
    }
}

void torre(int casas){ // Função recursiva do movimento da torre
    if(casas > 0){
        printf("Direita\n");
        torre(casas - 1);
    }
}

void rainha(int casas){ // Função recursiva do movimento da rainha
    if(casas > 0){
        printf("Esquerda\n");
        rainha(casas - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    int x;// Variável constante

    // Implementação de Movimentação do Bispo
    printf("Bispo:\n");
    bispo(x = 5); // Chamando a Função "bispo"
    printf("\n");

    // Implementação de Movimentação da Torre
    printf("Torre:\n");
    torre(x = 5); // Chamando a função "torre"
    printf("\n");

    // Implementação de Movimentação da Rainha
    printf("Rainha:\n");
    rainha(x = 8); // Chamando a função "rainha"
    printf("\n");

    // Implementação de Movimentação do Cavalo
    printf("Cavalo:\n");
    for(int y = 0, x = 1;y < 2; x--, y++){// Não sei como, mas isso funciona!
        printf("Cima\n");
        if(y == 0){
            continue;
        }else{
            printf("Direita\n");
        }
    }

    return 0;
}
