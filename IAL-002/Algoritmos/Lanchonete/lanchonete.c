#include <stdio.h>
#include <stdbool.h>

int main()
{

    /*
        Cachorro quente	    100 	1,20
        Bauru simples	    101 	1,30
        Bauru com ovo	    102 	1,50
        Hambúrguer	        103 	1,20
        Cheeseburguer	    104 	1,30
        Refrigerante	    105 	1,00
    */

    bool close = 0;
    double money = 0;
    double cash = 0;
    int countClient = 0;
    int quantity = 0;
    int code;

    printf("---> Bem vindo ao Caixa <---\n\n\n");

    while (close == 0)
    {
        money = quantity = code = 0;
        countClient += 1;

        printf("\n\nDigite o codigo do produto: ");
        scanf("%d", &code);
        printf("Digite a quantidade do produto: ");
        scanf("%d", &quantity);

        switch (code)
        {
        case 100:
            money = (double)quantity * 1.20;
            break;

        case 101:
            money = (double)quantity * 1.30;
            break;

        case 102:
            money = (double)quantity * 1.50;
            break;

        case 103:
            money = (double)quantity * 1.20;
            break;

        case 104:
            money = (double)quantity * 1.30;
            break;

        case 105:
            money = (double)quantity * 1.0;
            break;

        default:
            printf("Erro ao procurar o produto");
            countClient--;
            break;
        }

        cash += money;

        printf("\nValor a ser pago: %.2f", money);
        printf("\nDeseja fechar o caixa?: 0 (Nao) 1 (Sim): ");
        scanf("%d", &close);
    }
    printf("\nTotal em caixa: %.2f", cash);
    printf("\nTotal de clientes: %d", countClient);

    return 0;
}