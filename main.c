#include <stdio.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
}

int main()
{

    char nome1[50], nome2[50];
    int idade1, idade2;
    double idadeMedia;

    printf("Dados da primeira pessoa:\n ");
    printf("Nome: ");
    gets(nome1);
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa:\n ");
    printf("Nome: ");
    limpar_entrada();
    gets(nome2);
    printf("Idade: ");
    scanf("%d", &idade2);

    idadeMedia = (double) (idade1 + idade2) / 2;

    printf("A idade media de %s e %s e de %.1lf anos", nome1, nome2, idadeMedia);

    return 0;
}
