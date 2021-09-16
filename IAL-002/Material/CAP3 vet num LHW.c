#define ex1
#include "stdio.h"

/******************************************************************************

			MATRIZES OU VETORES NUMERICOS

*******************************************************************************

1. Compreendendo o que sao matrizes ou vetores

Uma matriz ou vetor e´ um conjunto de dados que pode armazenar multiplos valores
do mesmo tipo.

Por exemplo, pode-se criar uma vetor que contenha 100 valores do tipo "int"
e um segundo vetor com 25 valores do tipo "float". Observe que todos os valores
que sao atribuidos a um vetor sao do mesmo tipo.

Os valores de um vetor sao acessados atraves de um indice. Este indice e' que
caracteriza uma matriz ou vetor.

2.Definicao

Vetores sao variaveis compostas que agrupam dados do mesmo tipo e sao
referenciadas atraves de um indice.

Na linguaguem C, todos os vetores sao montados numa sequencia continua de
memoria ou seja,o endereco mais baixo corresponde ao primeiro elemento, e o
endereco mais alto ao ultimo elemento.

3.Declaracao de vetores

Para declarar um vetor, precisa-se especificar o tipo de dado desejado (tal
como int, float ou double), bem como o tamanho do vetor. Para especificar o
tamanho do vetor, utiliza-se o operador "[]". Dentro dos colchetes coloca-se o
numero de elementos que o vetor ira' armazenar.

O formato para declaracao de um vetor e':

	<tipo> <nome_variavel> [tamanho];
onde:
      tipo -> define o tipo de dado dos elementos do vetor.(int, float, long,
              etc..)

      nome_variavel -> e´o nome pelo qual o vetor vai ser referenciado

      tamanho -> e´o número de elementos que o vetor vai conter

OBS.: O <nome_variavel> de um vetor deve expressar o seu significado, mas deve
      obedecer as mesmas 4 regras para atribuicao de nomes das variaveis
      simples.

Exemplo:
int notas [100];    declara um vetor de nome "notas" do tipo "int" que pode
                    armazenar "100" notas

float salarios [50];   declara um vetor de nome "salarios" do tipo "float" que
                       pode armazenar "50" salários

Outro detalhe importante e´que na linguagem C nao ha' verificacao de limites nos
vetores. Isto significa que e´possivel ultrapassar o fim de um vetor e escrever
em outras variaveis, ou mesmo em trechos de codigo de programa. E´tarefa do
programador fazer com que os indices dos vetores estejam sempre dentro dos
limites estabelecidos pela declaracao do tamanho do vetor.

4. Refenciando um elemento do vetor

Cada um dos elementos de um vetor e´refenciado individualmente por meio de um
numero inteiro (indice) entre colchetes"[]" apos o nome do vetor. Este numero
tem 2 significados diferente a saber:
1. quando referencia um elemento do vetor e' o "indice do elemento".

2. na declaracao do vetor que indica o seu "tamanho".

Quando referenciamos um elemento do vetor atraves do seu indice, este numero
especifica a posicao do elemento no vetor

Exemplo:
notas [4];  referencia o 5. elemento do vetor "notas"

salarios [13];  referencia o 14. elemento do vetor "salarios"

Observando os exemplos acima podemos notar que o n. do elemento e´um a mais que
o numero entre colchetes. Isso acontece por que na linguaguem C as refenrencias
ou indices comecam em 0 e a referencia ou indice do ultimo elemento e´o tamanho
do vetor -1.

5.Inicializacao de vetores

Pode-se inicializar os elementos de um vetor junto com a declaracao da variavel.

Para inicializar os elementos um vetor temos 2 formas que sao os seguintes:

1 - declarando o n. de elementos do vetor explicitamente.

exemplo: int notas [4] = {1,2,3,4};

2 - sem declarar o tamanho do vetor. Neste caso, o tamanho sera´ preenchido
pelo pre-compilador que contara o n. de elementos da inicializacao. Os
colchetes "[]" sao declarados vazios neste caso.

Exemplo: int notas [] = {1,2,3,4};

Observe nos exemplos acima que a inicializacao e´feita utilizando-se o abre
chave"{" e o fecha chave"}" colocados depois do operador atribuicao(=) e entre
as chaves "{}" utiliza-se a virgula"," para separar os elementos.

Um vetor so' pode ser inicializado se for declarado como uma variavel global
ou static local.

Um vetor declarado como variavel local pode ser inicializado se for elemento
por elemento.

Porem, se o vetor for declarado mas nao tem inicializacao, entao e' obrigatorio
declarar o numero de elementos(tamanho) deste vetor. Em outra palavras os
colchetes tem que ter o numero de elementos do vetor (tamanho).

Exemplos:*/

#ifdef ex1
/* inicializacao como variavel global com o tamanho do vetor declarado
explicitamente */

int f[10]={1,2,3,4,5,6,7,8,9,10};

main()
{
printf("Os numeros sao: ");
printf(" %d",f[0]);
printf(" %d",f[1]);
printf(" %d",f[2]);
printf(" %d",f[3]);
printf(" %d",f[4]);
printf(" %d",f[5]);
printf(" %d",f[6]);
printf(" %d",f[7]);
printf(" %d",f[8]);
printf(" %d",f[9]);
}
#endif

#ifdef ex2
main()
{
/* inicializacao como variavel local static sem declarado de tamanho */

static int f[]={10,20,30,40,50,60,70,80,90,100};

printf("Os numeros sao: ");
printf(" %d %d %d %d %d %d %d %d %d %d",
f[0],f[1],f[2],f[3],f[4],f[5],f[6],f[7],f[8],f[9]);

}
#endif

#ifdef ex3
main()
{
/* vetor como variavel local, sem inicializacao.
Aqui como nao tem inicializacao e obrigatorio preencher os colchetes "[]" com
o numero de elementos do vetor (tamanho) */

float f[10];

f[0] = 11.1;		/* inicializacao elemento por elemento*/
f[1] = 12.2;
f[2] = 13.3;
f[3] = 14.4;
f[4] = 15.5;
f[5] = 16.6;
f[6] = 17.7;
f[7] = 18.8;
f[8] = 19.9;
f[9] = 20.29;

printf("Os numeros sao: \n");
printf(" %f\n",f[0]);
printf(" %f\n",f[1]);
printf(" %f\n",f[2]);
printf(" %f\n",f[3]);
printf(" %f\n",f[4]);
printf(" %f\n",f[5]);
printf(" %f\n",f[6]);
printf(" %f\n",f[7]);
printf(" %f\n",f[8]);
printf(" %f\n",f[9]);

}
#endif



