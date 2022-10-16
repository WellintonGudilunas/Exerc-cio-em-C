#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese" );
    int pesquisas; 
    int idade;
    int indiceSatisfacao;

    float quantidadeNota1;
    float quantidadeNota2;
    float quantidadeNota3;
    float quantidadeNota4;
    float quantidadeNota5;
    float somaIdade;
    float mediaIdadeNota5;
    float maiorIdadeNota1 = 0;
    for (pesquisas = 1; pesquisas < 6; pesquisas++)
    {   
        printf("Pesquisa %d \n", pesquisas);
        printf("Qual é a sua idade?: ");
        scanf("%d", &idade);
        printf("Qual é o indice de satisfação?:  ");
        scanf("%d", &indiceSatisfacao);

        if (indiceSatisfacao == 1) {
            quantidadeNota1++;
            if (idade > maiorIdadeNota1) {
                maiorIdadeNota1 = idade;
            }
        } else if (indiceSatisfacao == 2)
        {
            quantidadeNota2++;
        }
         else if (indiceSatisfacao == 3)
        {
            quantidadeNota3++;
        } else if (indiceSatisfacao == 4)
        {
            quantidadeNota4++;
        } else if (indiceSatisfacao == 5) {
            quantidadeNota5++;
            somaIdade += idade;
        }  
    }
    printf("Quantidade de nota 1: %f \n", (quantidadeNota1 / 5) * 100);
    printf("Quantidade de nota 2: %f \n", (quantidadeNota2 / 5) * 100);
    printf("Quantidade de nota 3: %f \n", (quantidadeNota3 / 5) * 100);
    printf("Quantidade de nota 4: %f \n", (quantidadeNota4 / 5) * 100);
    printf("Quantidade de nota 5: %f \n", (quantidadeNota5 / 5) * 100);
    printf("A média da idade das pessoas que responderam com a nota 5 foi: %f \n", (somaIdade / quantidadeNota5));
    printf("A maior idade que digitou a nota1 foi %f \n", maiorIdadeNota1);

}
