#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void rainha(int n){ //cria um  procedimento que vai receber um inteiro
    if (n > 0) //verifica se esse inteiro é maior do que 0
    {
        printf("Rainha para a esquerda\n");//executa o print
        rainha(n - 1);//Decrementa do numero inteiro criando a recursividade
    }
}

void torre(int n){
    if (n > 0)
    {
        printf("Torre para a direita\n");
        torre(n -1);
    }
}

int main() {
    int moveBispo = 0;
    int moveTorre = 5;
    int moveRainha = 8;

    /*while(moveBispo < 5){ //while para movimentar o bispo
        printf("Bispo para a Direita, Cima\n");
        moveBispo++;
    }*/
   
    for (moveBispo = 0; moveBispo < 5; moveBispo++) //verifica se o movimento do bispo é menor do que 5, executa o codigo e incrementa
    {
        for (int moveBispoCima = 0; moveBispoCima < 1; moveBispoCima++) //verifica se o movimento do bispo para cima é menor do que 1, executa o codigo e incrementa
        {
            printf("Bispo para cima\n"); //executa uma unica vez e sai do loop
        }
        printf("Bispo para a direita\n"); // executa e volta ao inicio do loop
    }
    

    printf("************************\n");

    torre(moveTorre); //recursividade para a torre

    printf("************************\n");

    rainha(moveRainha); //recursividade para a rainha

    printf("************************\n");

    //Após queimar todos os neuronios do meu cérebro, segue o movimento do cavalo
    for(int moveCavaloCima = 3, moveCavaloDireita = 0; moveCavaloCima >= 0; moveCavaloCima--, moveCavaloDireita++)
    {
        if (moveCavaloCima >= 1) //checa se a variavel local moveCavaloCima é maior ou igual a 1, imprime "cavalo para cima" e retorna para o inicio do loop
        {
            printf("Cavalo para Cima\n");
            continue;
        } //Quando o loop termina de verificar ele quebra a condição de retornar ao inicio e executa o resto do codigo
        printf("Cavalo para a Direita\n");
    }

    return 0;
}
