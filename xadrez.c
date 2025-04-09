#include <stdio.h>

// Desafio de Xadrez - MateCheck
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    int x = 1;// Variável constante
    // Implementação de Movimentação do Bispo
    printf("Bispo:\n");
    do{
        printf("Cima Direita\n");// Exibe "Cima Direita"
        x++;// Acrescenta 1 em x
    }while(x <= 5);// Repete o código
    // Implementação de Movimentação da Torre
    x = 1;// Retorna a variável para o valor inicial
    printf("Torre:\n");
    while(x <= 5){// Repete o código abaixo
        printf("Direita\n");// Exibe "Direita"
        x++;// Acrescenta 1 em x
    }
    // Implementação de Movimentação da Rainha
    printf("Rainha:\n");
    for(x = 1; x <= 8; x++){// Retorna "x" para 1, repete o código e acrescenta 1 em x
        printf("Esquerda\n");// Exibe "Esquerda"
    }
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\nCavalo:\n");
    for(x = 1; x > 0; x--){// Retorna "x" para 1, repete o código e diminui x em 1 por ciclo
        int y = 0;// Variável interna
        while (y < 2){// Loop interno
            printf("Baixo\n");// Exibe "Baixo"
            y++;// Acrescenta 1 em y
        }
        printf("Esquerda\n");// Exibe "Esquerda"
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
