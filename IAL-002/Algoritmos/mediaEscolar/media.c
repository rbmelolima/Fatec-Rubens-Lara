#include <stdio.h>

int main()
{
    int nota1 = 0,
        nota2 = 0,
        quantidadeAlunos = 0,
        aprovados = 0,
        reprovados = 0,
        recuperacao = 0;
    double mediaAluno = 0,
           mediaClasse = 0;

    printf("************************************\n");
    printf("                                    \n");
    printf("         Gerenciador escolar        \n");
    printf("                                    \n");
    printf("************************************\n");

    printf("\nDigite a quantidade de alunos: ");
    scanf("%d", &quantidadeAlunos);

    printf("Ok, entraremos no loop %d vezes\n\n", quantidadeAlunos);

    for (int i = 1; i <= quantidadeAlunos; i++)
    {
        nota1 = nota2 = 0;
        mediaAluno = 0.0;

        printf("\nNota 1 do aluno %d: ", i);
        scanf("%d", &nota1);

        printf("Nota 2 do aluno %d: ", i);
        scanf("%d", &nota2);

        mediaAluno = (double)(nota1 + nota2) / 2;

        if (mediaAluno <= 3.0)
        {
            printf("O aluno %d foi reprovado, sua média final é: %.2f\n", i, mediaAluno);
            reprovados++;
        }
        else if (mediaAluno > 3.0 && mediaAluno <= 7.0)
        {
            printf("O aluno %d deverá ser conduzido à P3, sua média final é: %.2f\n", i, mediaAluno);
            recuperacao++;
        }

        else if (mediaAluno > 7.0)
        {
            printf("O aluno %d foi aprovado, sua média final é: %.2f\n", i, mediaAluno);
            aprovados++;
        }
        mediaClasse += mediaAluno / quantidadeAlunos;
    }

    printf("Relatório geral:\n\n Aprovados: %d\nRecuperação: %d\nReprovados: %d\nMédia da classe: %.2f\n", aprovados, recuperacao, reprovados, mediaClasse);
    return 0;
}
