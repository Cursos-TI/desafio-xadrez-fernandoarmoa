/*
Este desafio foca na movimentação das peças de xadrez usando estruturas de repetição em C.
Você aplicará o que aprendeu sobre for, while e do-while para simular movimentos no tabuleiro.

    Torre: Move-se em linha reta horizontalmente ou verticalmente.
           Seu programa deverá simular o movimento da Torre cinco casas para a direita.
 
    Bispo: Move-se na diagonal.
           Seu programa deverá simular o movimento do Bispo cinco casas na diagonal 
           para cima e à direita. Para representar a diagonal, você imprimirá a 
           combinação de duas direções a cada casa (ex: "Cima, Direita").
 
    Rainha: Move-se em todas as direções.
            Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
*/
#include <stdio.h>


int main(){

    // declarando variáveis
    char* linha[10] = {"1", "2", "3", "4", "5", "6", "7", "8"};
    char* coluna[10] = {"a", "b", "c", "d", "e", "f", "g", "h"};

    // movimentando a torra 5 casas para a direita
    printf("\nMovimentando a Torre 5 casas para a direita.\n");
    int posicao = 0;
    while (posicao < 5)
    {
        printf("Torre à direta na casa %s1.\n", coluna[posicao]);
        posicao++;
    }
    
    // movimentando a rainha 8 casas para a esquerda
    printf("\nMovimentando a Rainha 8 casas para a esquerda.\n");
    posicao = 8;
    do
    {
        printf("Rainha à esquerda na casa %s1.\n", coluna[posicao - 1]);
        posicao--;
    } while (posicao > 0);
    
    // movimentando o bispo 5 casas para cima e para a direita.
    printf("\nMovimentando o Bispo 5 casas para a cima e para direta.\n");
    for (int posicao = 0; posicao < 5; posicao++){
        printf("Bispo à cima e a direita na casa %s%s.\n", coluna[posicao], linha[posicao]);
    }


    return 0;
}
