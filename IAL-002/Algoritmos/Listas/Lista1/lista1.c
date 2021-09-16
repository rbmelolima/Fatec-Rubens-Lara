#include <stdio.h>
#define ex7lista1Compl

// -------------------------------------------------------------------

#ifdef ex1lista1
main()
{
  int number = 0;

  printf("Digite o número: ");
  scanf("%d", &number);

  printf("%d\n", number - 1);
  printf("%d\n", number + 1);
}
#endif

#ifdef ex2lista1
main()
{
  int number = 0;

  printf("Digite o número: ");
  scanf("%d", &number);

  printf("%f\n", number + number * 0.1);
}
#endif

#ifdef ex3lista1
main()
{
  float number = 0;

  printf("Digite o número: ");
  scanf("%f", &number);

  printf("%f\n", number - number * 0.09);
}
#endif

#ifdef ex4lista1
main()
{
  double valueHour = 0;
  int quantity = 0;
  int discount = 0;

  printf("\nDigite o valor hora aula: ");
  scanf("%f", &valueHour);

  printf("\nDigite o numero de aulas: ");
  scanf("%d", &quantity);

  printf("\nDigite desconto do INSS: ");
  scanf("%d", &discount);

  double bruto = (valueHour * quantity);
  double liquid = bruto - (double)(bruto * (discount * 0.1));

  printf("\nSalario bruto: R$: %2.f", bruto);
  printf("\nDesconto R$: %2.f", discount);
  printf("\nSalario liquido R$: %2.f", liquid);
}
#endif

#ifdef ex9lista1
main()
{
  int note = 0;
  double media = 0;

  for (int i = 0; i < 4; i++)
  {
    printf("Digite a nota %d: ", i + 1);
    scanf("%d", &note);

    while (note > 10 && note < 0)
    {
      printf("Digite a novamente a nota %d: ", i + 1);
      scanf("%d", &note);
    }

    media += (double)(note) / 4;
  }

  if (media > 5)
    printf("Aprovado");

  else
    printf("Reprovado");

  printf("Média %f", media);
}
#endif

// -------------------------------------------------------------------

#ifdef ex1lista1Compl

main()
{
  int number1, number2;

  printf("Digite o numero 1: ");
  scanf("%i", &number1);

  printf("Digite o numero 2: ");
  scanf("%i", &number2);

  if (number1 > number2)
  {
    printf("Maior: %i", number1);
  }

  else if (number1 < number2)
  {
    printf("Maior: %i", number2);
  }

  else
  {
    printf("Iguais");
  }
}
#endif

#ifdef ex2lista1Compl

main()
{
  int number, i = 0, max = 0;

  while (i <= 3)
  {
    printf("Digite o numero %i: ", i);
    scanf("%i", &number);

    if (number > max)
    {
      max = number;
    }

    i++;
  }

  printf("Maior numero: ", max);
}
#endif

#ifdef ex6lista1Compl

main()
{
  float height = 0;
  float heightStep = 0;

  printf("\nDigite a altura do degrau: ");
  scanf("%f", &heightStep);

  printf("\nDigite a altura que queres subir: ");
  scanf("%f", &height);

  printf("\nQuantidade aproximada de degraus: %0.f", height / heightStep);
}
#endif

#ifdef ex3lista1Compl

main()
{
  int number = 0;

  printf("Digite o numero: ");
  scanf("%i", &number);

  if (number % 2 == 0)
  {
    printf("\nPar");
  }

  else
  {
    printf("\nImpar");
  }
}

#endif

#ifdef ex7lista1Compl

main()
{
  char sex;
  float height = 0;
  float weight = 0;

  printf("Digite o seu sexo\n(m) Masculino (f) Feminino\n");
  sex = getchar();  

  while (sex != 'm' && sex != 'f')
  {
    printf("\nDigite o seu sexo corretamente\n(m) Masculino (f) Feminino\n ");
    sex = getchar();
  }

  printf("\nDigite a altura: ");
  scanf("%f", &height);

  if (sex == 'm')
  {
    weight = ((72 * height) - 58);
  }

  else if (sex == 'f')
  {
    weight = ((62.1 * height) - 44.7);
  }

  printf("Peso ideal: %2.f kg", weight);
}

#endif