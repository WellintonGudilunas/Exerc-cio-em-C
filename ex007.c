#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

 int main(int argc, char const *argv[])
 {
    setlocale(LC_ALL, "Portuguese");

    int pesquisas;
    int idade;
    int indiceSatisfacao;


    float quantidadeNota1 = 0;
    float quantidadeNota2 = 0;
    float quantidadeNota3 = 0;
    float quantidadeNota4 = 0;
    float quantidadeNota5 = 0;

    float idadeNota1 = 0;
    float somaIdade = 0;

    for(pesquisas = 1; pesquisas<6; pesquisas++)
    {
        printf("Pesquisa %d \n", pesquisas);
        printf("Qual é a idade?");
        scanf("%d", &idade);
        printf("Qual é o indice de satisfação?");
        scanf("%d", &indiceSatisfacao);
        
        if (indiceSatisfacao == 1) {
            quantidadeNota1++;
            idadeNota1 += idade;
        } else if (indiceSatisfacao == 2){
            quantidadeNota2++;
        } else if (indiceSatisfacao == 3) {
            quantidadeNota3++;
        } else if (indiceSatisfacao == 4) {
            quantidadeNota4++;
        } else if (indiceSatisfacao == 5) {
            quantidadeNota5++;
            somaIdade += idade;
        }         
    }

    printf("Quantidade nota1 %f \n", (quantidadeNota1 / 5) * 100);
    printf("Quantidade nota2 %f \n", (quantidadeNota2 / 5) * 100);
    printf("Quantidade nota3 %f \n", (quantidadeNota3 / 5) * 100);
    printf("Quantidade nota4 %f \n", (quantidadeNota4 / 5) * 100);
    printf("Quantidade nota5 %f \n", (quantidadeNota5 / 5) * 100);
    printf("A média das idades que responderam  com a nota5 é igual a %f \n", (somaIdade / quantidadeNota5));
    printf("A maior idade que respondeu com nota1 foi: %f", idadeNota1);

 }
 