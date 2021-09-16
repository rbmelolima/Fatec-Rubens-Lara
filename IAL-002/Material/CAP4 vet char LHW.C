#define ex1
#include "stdio.h"

/******************************************************************************

	    MATRIZES OU VETORES COM SERIE DE CARACTERES OU STRING

*******************************************************************************
1. Vetor de serie de caracteres ou strings

Um vetor de string e' uma variavel do tipo "char" que armazena mais de um
caracter ou seja um serie de caracteres. Assim, um vetor de string e´uma serie
de caracteres, onde cada um deste caracteres ocupa um byte na memoria, um do
lado do outro em sequencia, e o ultimo byte e'sempre o finalizador "\0".

Um vetor de string pode ser acessado de 2 formas, caracter por caracter atraves
do "indice" de cada uma dos elemnetos do vetor (como nos vetores numerico), ou
como uma string acessando todos os caracteres ate' encontrar o finalizador"\0",

2. Inicializando um vetor ou matriz de strings ou serie de caracteres

Lembrando que, um vetor so´pode ser inicializado se for declarado como uma
variavel global ou static local. Para um vetor de string a regra continua
valendo.

Podemos inicializar um vetor de strings de 2 formas:

A - Inicializando letra por letra como nos vetores numerico. Neste caso, o
finalizador "\0" deve ser colocado explicitamente assim pode-se tratar os
elementos deste vetor como uma unica string. Nao colocando o finalizador
"\0" nao se pode acessar o conteudos como string apenas caracter por caracter
atraves do indice como nos vetores numericos.

Exemplo:
    char nome [] = {'F','A','T','E','C'}; sem finalizador

    char nome [] = {'F','A','T','E','C','\0'}; com finalizador

B - Inicializando como string. Neste caso o finalizador e´colocado
automaticamente. Lembrando ainda que o finalizador tambem e´um caracter,
portanto ocupa uma posicao no vetor.

Exemplo:
    char nome [] = {"FATEC"}; sem contar os caracteres da string, o pre'
                              compilador faz a contagem

    char nome [6] = {"FATEC"}; contando os caracteres da string (5 letras +
                               1 do finalizador

Antes de estudarmos alguns exemplos com vetores utilizando uma serie de
caracteres ou string, vamos voltar as funcoes de biblioteca printf e scanf e
verificar como elas funcionam usando uma string.

3 - printf() -> escreve caracteres formatados na saida padrao.(no caso video)

A forma geral da funcao printf() e´:
	printf("<serie de controle>", lista de argumentos);

O codigo de formatacao para uma serie de caracteres ou string e' "%s"

Exemplo:
*/
#ifdef ex1
/* variavel global do tipo caracter, com inicializacao letra por letra.
   Aqui nao tem o finalizador\0 e nao se contou o n. de elementos do vetor */

char f[]={'A','B','C','D','E','F','G','H','I','J'};

main()
{
printf("As letras sao: \n");
printf(" %c",f[0]);
printf(" %c",f[1]);
printf(" %c",f[2]);
printf(" %c",f[3]);
printf(" %c",f[4]);
printf(" %c",f[5]);
printf(" %c",f[6]);
printf(" %c",f[7]);
printf(" %c",f[8]);
printf(" %c",f[9]);

}
#endif

#ifdef ex2
/* idem ao anterior. Contando o n. de elementos do vetor. */

char f[10]={'Z','Y','X','W','V','U','T','S','R','Q'};

main()
{
printf("As letras sao: \n");
printf(" %c %c %c %c %c %c %c %c %c %c",
f[0],f[1],f[2],f[3],f[4],f[5],f[6],f[7],f[8],f[9]);

}
#endif

#ifdef ex3
/* idem ao ex1. Conta o n. de elementos do vetore acrescenta explicitamente o
finalizador \0 */

char f[11]={'K','L','M','N','O','P','Q','R','S','T','\0'};

main()
{
printf("As letras sao: \n");
printf(" %c %c %c %c %c %c %c %c %c %c \n",
f[0],f[1],f[2],f[3],f[4],f[5],f[6],f[7],f[8],f[9]);

printf("Acessando o vetor como string -> %s",f);

}
#endif

#ifdef ex4
/* variavel global do tipo caracter. Inicializacao como string (finalizador e'
colocado automaticamente). Contou - se o n. de elementos do vetor */

char f[11]="zyxwvutsrq"; /* 10 letras + 1 finalizador */

main()
{
printf(" As letras sao: \n");
printf(" %c",f[0]);
printf(" %c",f[1]);
printf(" %c",f[2]);
printf(" %c",f[3]);
printf(" %c",f[4]);
printf(" %c",f[5]);
printf(" %c",f[6]);
printf(" %c",f[7]);
printf(" %c",f[8]);
printf(" %c\n\n",f[9]);

printf("Acessando o vetor como string -> %s\n",f);

}

#endif

#ifdef ex5
main()
{
/*variavel static local do tipo caracter.Sem contar o n. de elementos do vetor*/

static char f[]="abcdefghij"; /* 10 letras + 1 finalizador */

printf(" As letras sao: \n");
printf(" %c",f[0]);
printf(" %c",f[1]);
printf(" %c",f[2]);
printf(" %c",f[3]);
printf(" %c",f[4]);
printf(" %c",f[5]);
printf(" %c",f[6]);
printf(" %c",f[7]);
printf(" %c",f[8]);
printf(" %c\n\n",f[9]);

printf("Acessando o vetor como string -> %s\n",f);

}

#endif

/*
4 - scanf() -> le caracteres formatados da entrada padrao. (no caso teclado)

A forma geral da funcao scanf() e´:
	scanf("<serie de controle>", lista de argumentos);

O codigo de formatacao para uma serie de caracteres ou string e' "%s".

Lembrando que no scanf a serie de controle nao pode conter nenhuma string ou
caracter especial somente o codigo de formatacao.

Exemplo:
*/
#ifdef ex7
main()
{
char a[30];  /*variavel local. Como nao tem inicializacao e' obrigatorio
               declarar o numero de elementos (tamanho) do vetor */
printf("digite uma string: \n");

scanf("%s",&a[0]); /* observe que aqui nao se utiliza o operador de endereco "&"*/

printf("a string digitada e': %s",a);

}

#endif

/*
Temos outras 2 funcoes de biblioteca que funcionando somente com uma serie de
caracteres ou string, sao elas:

5 - gets () -> le uma serie de caracteres da entrada padrao (no caso teclado) +
a tecla ENTER.

A forma geral da funcao gets() e': gets(variavel);

Exemplo:*/
#ifdef ex8
main()
{
char c[40];   /*variavel local. Como nao tem inicializacao e' obrigatorio
                declarar o numero de elementos (tamanho) do vetor */
printf("digita um string via teclado : ");
gets(c);
printf("a string digitada e': %s",c);

}
#endif

/*
6 - puts() -> escreve uma serie de caracteres na saida padrao.(no caso video)

A forma geral da funcao puts() e´: puts(variavel);

Exemplo:*/
#ifdef ex9
main()
{
char c[50];   /*variavel local. Como nao tem inicializacao e' obrigatorio
                 declarar o numero de elementos (tamanho) do vetor */

puts("digita um string via teclado : ");
gets(c);
printf("a string digitada e': ");
puts(c);

}
#endif


