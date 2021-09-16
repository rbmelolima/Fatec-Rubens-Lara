/*
1) Receba a quantidade de números pares definida pelo usuário representada pela variável J. A variável par representa cada número par digitado pelo usuário. Exiba a média dos números pares divisíveis por 3, o maior número par encontrado e a quantidade de vezes que ele apareceu.

2) Desafio: Solicite ao usuário dois números positivos e diferentes. O primeiro deve ser menor que o segundo e exiba todos os números definidos nesse intervalo. Utilize o laço for para exibir esses números. */

#include <stdio.h>
#define ex2

#ifdef ex1
main()
{
  int qtd = 0, par = 0, max = 0, maxCount = 1, maxOld = 0, numbers = 0, countDivisible3 = 0;
  double divisible3 = 0;

  printf("Digite a quantidade de numeros: ");
  scanf("%d", &qtd);

  for (int i = 0; i < qtd; i++)
  {
    printf("\nDigite o numero %d: ", i + 1);
    scanf("%d", &numbers);

    while (numbers % 2 != 0)
    {
      printf("\nDigite o numero %d, que seja PAR: ", i + 1);
      scanf("%d", &numbers);
    }

    if (numbers % 3 == 0)
    {
      divisible3 += (double)numbers;
      countDivisible3++;
    }

    if (numbers > max)
    {
      max = numbers;
      maxOld = max;
    }

    else if (numbers == max && max == maxOld)
      maxCount++;

    else if (numbers == max && max != maxOld)
    {
      maxCount = 0;
      maxCount++;
    }
  }

  printf("\n\n\nMedia dos numeros divisiveis por 3: %f \nMaior numero: %d \nQuantidade de vezes que ele apareceu: %d", divisible3 / countDivisible3, max, maxCount);
}
#endif

#ifdef ex2
main()
{
  int range1 = 0, range2 = 0;

  printf("\nDigite o número 1: ");
  scanf("%d", &range1);

  printf("\nDigite o número 2: ");
  scanf("%d", &range2);

  while (range1 < 0)
  {
    printf("\n\nDigite o número 1, que deve ser POSITIVO: ");
    scanf("%d", &range1);
  }

   while (range2 < 0 || range2 < range1)
  {
    printf("\n\nDigite o número 2, que deve ser POSITIVO e MAIOR que o numero 1: ");
    scanf("%d", &range1);
  }

  for(int i = range1; i <= range2; i++){
    printf("\n%d", i);
  }
}
#endif
