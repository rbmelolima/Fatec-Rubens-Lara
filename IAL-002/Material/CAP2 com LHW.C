#define ex1
#include "stdio.h"
/******************************************************************************

                                COMANDOS

*******************************************************************************
Toda linguaguem de programacao para computador precisa oferecer um minimo de
tres formas basicas de controle:

1 - executar uma serie de instrucoes
2 - tomar decisoes para desviar a execucao do programa. (controle de fluxo)
3 - repetir uma sequencia de instrucoes ate que uma condicao seja satisfeita.
(controle de repeticao)

Os comandos de controle de fluxo sao aqueles que permitem ao programador alterar
a sequencia de execucao do programa. Os comandos sao: if e switch.

1- if

O comando "if" representa uma tomada de decisao do tipo "SE isto ENTAO aquilo".

Avalia-se uma "expressao" para tomada de decisao e se a expressao e'verdadeira
(== 1) executa a "declaracao", se falsa(== 0) nao executa a "declaracao". O
corpo do "if" pode ter uma unica declaracao ou varias declaracoes entre um abre
chave "{" e um fecha chave "}".

O formato geral quando se tem uma unica declaracao e':

-  if (expressao)

	declaracao;

O formato geral quando se tem mais de uma declaracao e':

-  if (expressao)
	{
	declaracao;
	declaracao;
	}

Observe que aqui tem que se usar o abre chave "{" e o fecha chave "}" para
agrupar as declaracoes. Isto vale para todos os comando da linguaguem C.

Exemplo: */

#ifdef ex1
main()
{
char ch;

printf("digite uma letra: ");
ch=getchar();
getchar();

if(ch == 'r')
	printf("\nVoce digitou a tecla r");

printf("\nVoce nao digitou a tecla r");

}
#endif

#ifdef ex2
main()
{
char ch;

printf("digite uma letra: ");
ch=getchar();
getchar();

if(ch == 'r')
	{
	printf("\nVoce digitou a tecla r");
	printf("\nparabens voce acertou");
	}

printf("\nVoce nao digitou a tecla r");

}
#endif

/*
2 - if - else

o comando "if-else" e' uma expansao do comando "if". No comando "if" so' se
executa a declaracao ou declaracoes se a expressao for verdadeira(== 1). O
comando "else" permite executar outra declaracao ou declaracoes se a expressao
for falsa(== 0). Resumindo, se a "expressao" for verdadeira(== 1) executa-se as
"declaracoes" antes do "else", se a "expressao" for falsa(== 0) executa-se as
"declaracoes" depois do "else".

O formato geral quando se tem uma unica declaracao e':

-  if (expressao)

  	declaracao1;

   else

	declaracao2;

O formato geral quando se tem mais de uma declaracao e':

-  if (expressao)
	{
	declaracao1;
	declaracao1;
	}
   else
	{
	declaracao2;
	declaracao2;
	}

Exemplo: */

#ifdef ex3
main()
{
char ch;


printf("digite uma letra: ");
ch=getchar();
getchar();

if(ch == 'r')
	{
	printf("\nVoce digitou a tecla r");
	printf("\nparabens voce acertou");
	}
else
	{
	printf("\nVoce nao digitou a tecla r");
	printf("\nque azar voce errou");
	}
}
#endif

/******************************************************************************
Os comandos de "controle de repeticao" permitem que um conjunto de instrucoes
sejam executados ate' que uma "condicao limite" seja encontrada. Os comandos
sao:
	for, while e do - while.

4 - for

O comando "for" repete uma "declaracao" ou um "grupo de declaracoes", controlado
por uma variavel e executado por um numero finito de vezes. A sua sintaxe e'
declarada toda na mesma linha, o que facilita sua compreensao.

O formato geral quando se tem uma unica declaracao e':

	for (expressao 1 ; expressao 2 ; expressao 3)

        	declaracao;

O formato geral quando se tem mais de uma declaracao e':

	for (expressao 1 ; expressao 2 ; expressao 3)
		{
        	declaracao;
		declaracao;
		}

Na "expressao 1" incializa-se a variavel de controle o loop.

Na "expressao 2" testa-se a variavel de controle. Este teste pode ser um teste
logico ou um contador. Enquanto o teste da variavel de controle for verdade(==1)
o loop continua a ser executado. Quando o teste se torna falso(==0), o controle
do programa passa para a "declaracao" seguinte ao loop apos o fecha chave "}"
quando  este existir.

Na "expressao 3" controla-se o incremento ou decremento da variavel de controle
do loop.

O funcionamento do comando "for" comeca pela "expressao 1" onde a variavel de
controle do loop e' inicializada. A "expressao 1" e' executada uma unica vez no
inicio do loop. Entao executa-se as "declaracoes". Em seguida a "expressao 3",
incrementa ou decrementa da variavel de controle. Apos a execucao da
"expressao 3" e' testada a variavel de controle na "expressao 2".

Exemplo:*/

#ifdef ex4
main()
{
int i;

for (i = 0; i <= 20; i++)
	{
	printf ("Este e' o valor da variavel de controle i: %d ", i);
	printf (" e i ao quadrado e': %d\n", i * i);
	}
}
#endif

/*
5 - Laco ou loop infinito

Um comando "for" sem a "expressao 2" ou seja, sem o teste logico, e' sempre
verdade. Isso caracteriza um "loop infinito". Normalmente o "loop infinito" nao
tem as 3 expressoes de controle no caso do comando "for".

O formato geral sem a expressao 2 e':

	for (expressao 1 ;; expressao 3)
                {
        	declaracao;
                }

O formato geral sem as 3 expressao e':

	for (;;)
                {
        	declaracao;
                }
Exemplo:*/

#ifdef ex5
main()
{

for ( ; ; )
   {
   printf ("Este laco sera' executado para sempre.\n");
   printf("Para interromper este loop inifinito aperte as teclas Ctrl+c\n");
   }
}
#endif

/*
9 - break
Ele forca a saida incondicional de um laco. Este laco pode ser infinito ou nao.

Exemplo:*/

#ifdef ex6
main()
{
char ch;
int cont = 0;

printf("digite a letra certa para sair do loop\n");
for ( ; ; )
	{
	ch = getchar(); //lê um caractere
	getchar();
	if (ch == 'k' )
		break; //sai do laço
	cont = cont + 1;
	}
printf ("\nVoce acertou que e'a letra 'k' depois de %d tentativas\n",cont+1);
}
#endif

/*
6 - while

Em muitos casos, os programas precisam repetir uma ou mais declaracoes ate' que
o laco atenda a uma condicao especifica que nao envolva necessariamente uma
contagem.

Um dos comandos utilizados para este fim e' o comando "while". Usa-se este
comando quando queremos que uma tarefa seja executada enquanto a "condicao
logica" for verdadeira(==1). Quando esta e'falsa (==0) pula-se para a
"declaracao" seguinte ao laco. O teste da "condicao logica" e' executado antes
de entrar no laco. Portanto se a condicao for falsa(==0) no primeiro teste a
"declaracao" ou "declaracoes" que estao dentro do laco nao serao executadas
nenhuma vez.

O formato geral quando se tem uma unica declaracao e':

	while (condicao)

        	declaracao;

O formato geral quando se tem mais de uma declaracao e':

	while (condicao)
		{
		declaracao;
		declaracao;
		}

Assim como no "for", o comando 'while" sem a condicao logica gera um "loop
infinito", pois este sera' sempre verdade.

O formato geral  e':

	while ()
                {
        	declaracao;
                }
Exemplo:*/

#ifdef ex7
/* calcula a fatorial de um numero */

main()
{
double x,y;
double fat;

printf("digite um numero: ");
scanf("%lf",&x);
getchar();

fat = 1;
y = 1;

while (y < x)
	{
	y = y + 1;
	fat = fat * y;
	}

printf("O valor da fatorial e' = %g\n",fat);

}
#endif

/*
7 - do - while

Este comando e' semelhante ao anterior. A diferenca esta' na avaliacao da
"condicao logica" que acontece apos a execucao da "declaracao" ou "declaracoes"
pelo menos uma vez, pois a "condicao" esta' no final do loop(apos o while). Em
outras palavras, a "declaracao" ou "declaracoes" sao executadas pelo menos uma
vez e depois e' avaliada a "condicao logica". Se a "condicao" for verdadeira
(==1) a "declaracao" ou "declaracoes" sao executadas novamente. Se a "condicao
logica" for falsa(==0) a execucao do programa continua na "declaracao" seguinte
ao loop.

Para este comando e' necessario sempre se utiliza o abre chave "{" e o fecha
chave "}" entre o "do" e o "while".

Para este comando nao existe loop inifinito.

O formato geral que e' igual tanto para uma como para mais declaracoes e':

	do
		{
		declaracao;
		declaracao;
		}while (condicao);

Exemplo:*/

#ifdef ex8

main()
{
double y,x;
double fat;
char tecla;


do
	{
	printf("\ndigite um numero: ");
	scanf("%lf",&x);
	getchar();
	fat = 1;
	y = 1;

	while (y < x)
		{
		y = y + 1;
		fat = fat * y;
		}

	printf("O valor da fatorial e' = %g\n",fat);

	printf("\ndeseja continuar?(s/n) ");
	tecla = getchar();
	getchar();
	}while ((tecla != 'n') && (tecla != 'N'));
}
#endif

