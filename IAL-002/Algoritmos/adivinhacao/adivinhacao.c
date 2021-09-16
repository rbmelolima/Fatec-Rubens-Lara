#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    printf("************************************\n");
    printf("\n* Bem vindo ao jogo da adivinhacao *\n");
    printf("************************************\n");

    srand(time(0));
    int secretNumber = rand() % 100;

    int count = 1;
    int number, difficultGame;
    int handleDifficult = 0;
    bool win = false;

    printf("\nEscolha uma dificuldade\n1 a 10\n");
    scanf("%d", &handleDifficult);

    difficultGame = 100 - abs(handleDifficult - 1) * 10;

    printf("\nQuantidade de rodadas: %d\n", difficultGame);

    for (int i = 1; i <= difficultGame; i++)
    {
        printf("\n");
        printf("Arrisque um chute: ");
        scanf("%d", &number);

        if (number == secretNumber)
        {
            printf("\nVoce acertou!\n");
            win = true;
            break;
        }

        else if (number < 0)
        {
            printf("Nao use numeros negativos\n");
        }

        else if (number > secretNumber)
        {
            printf("Errou pra cima\n");
            count = count + 1;
        }

        else
        {
            printf("Errou pra baixo\n");
            count = count + 1;
        }
    }

    if(!win){
        printf("Suas tentativas acabaram...");
    }

    printf("Total de rodadas: %d\n\n", count);

    return 0;
}
