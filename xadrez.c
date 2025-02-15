#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int moveBispo = 0;
    int moveTorre = 0;
    int moveRainha = 0;

    while(moveBispo < 5){
        printf("Bispo para a Direita, Cima\n");
        moveBispo++;
    }

    printf("************************\n");

    for ( moveTorre = 0; moveTorre < 5; moveTorre++)
    {
        printf("Torre para a direita\n");
    }

    printf("************************\n");
    
    do
    {
        printf("Rainha para a esquerda\n");
        moveRainha++;
    } while (moveRainha < 8);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
