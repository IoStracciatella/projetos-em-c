#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void jogo() {
    // Gera o número aleatório
    srand(time(NULL));
    int numeroAleatorio = rand() % 101;
    int numero;
    int tentativas = 0;

    // Loop que verifica se o número aleatório é igual ao inserido
    while (numero != numeroAleatorio) {
        
        printf("\nDigite um valor: ");
        scanf("%d", &numero);

        if (numero == numeroAleatorio) {
            printf("------------------------------\n");
            if (tentativas <= 3) {
                printf("VOCE ACERTOU EM MENOS DE 4 TENTATIVAS! IMPRESSIONANTE!");
                printf("\nNumero de tentativas: %d", tentativas);
            } else if (tentativas <= 5) {
                printf("Voce acertou em menos de 6 tentativas! Legal!");
                printf("\nNumero de tentativas: %d", tentativas);
            } else {
                printf("Parabens, voce acertou!");
                printf("\nNumero de tentativas: %d", tentativas);
            }
        } else if (numero < numeroAleatorio) {
            printf("O numero inserido e menor que o numero secreto!");
            tentativas++;
        } else if (numero > numeroAleatorio) {
            printf("O numero inserido e maior que o numero secreto!");
            tentativas++;
        }
    }
    
    char replay;
    printf("\n------------------------------");
    printf("\nGOSTARIA DE TENTAR NOVAMENTE?\n[s/n] ");
    scanf(" %c", &replay);

    if (replay=='s') {
        jogo();
    }
}

int main() {

    // Interface do programa
    printf("------------------------------\n");
    printf("TENTE ADIVINHAR O NUMERO!\nDica: Ele esta entre 0 e 100\n");
    printf("------------------------------");

    jogo();

    return 0;
}