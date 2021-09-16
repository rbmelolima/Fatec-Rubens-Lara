#include <stdio.h>
#define ex3

#ifdef ex1
main()
{
  int i = 1;

  while (i <= 100)
  {
    printf("%d\n", i);
    i += 2;
  }
}
#endif

#ifdef ex2
main()
{
  int i = 49;

  while (i <= 300)
  {
    printf("%d\n", i);
    i += 2;
  }
}
#endif

#ifdef ex3
main()
{
  int i = 0;
  printf("Insira o numero inteiro: ");
  scanf("%d", &i);

  while (i < 2)
  {
    printf("\n\n\nInsira o numero inteiro maior que 2: ");
    scanf("%d", &i);
  }

  for (int j = 2; j < i; j++)
  {
    if (j % 2 == 0)
    {
      printf("\n\n%d", j);
    }
  }
}
#endif