#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int moveBispo = 0;
    int moveTorre = 0;
    int moveRainha = 0;
    int moveCavalo = 1;

    while(moveBispo < 5){ //while para movimentar o bispo
        printf("Bispo para a Direita, Cima\n");
        moveBispo++;
    }

    printf("************************\n");

    for ( moveTorre = 0; moveTorre < 5; moveTorre++) //for para movimentar a torre
    {
        printf("Torre para a direita\n");
    }

    printf("************************\n");
    
    do //do-while para movimentação da rainha
    {
        printf("Rainha para a esquerda\n");
        moveRainha++;
    } while (moveRainha < 8);

    printf("************************\n");

    while (moveCavalo <= 1) //Movimento do cavalo usando loop aninhado
    {
        for (int i = 1; i <= 3; i++)
        {
            printf("Cavalo para Cima\n");
        }

        printf("Cavalo para a Direita\n");
        moveCavalo++;
    }
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
