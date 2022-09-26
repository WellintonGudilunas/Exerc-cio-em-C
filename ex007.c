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

    //int idade1;
   // int idade2;
   // int idade3;
   // int idade4;
  //  int idade5;
    float quantidadeNota1 = 0;
    float quantidadeNota2 = 0;
    float quantidadeNota3 = 0;
    float quantidadeNota4 = 0;
    float quantidadeNota5 = 0;

    float MediaIdadeNota5;
    float MediaIdadeNota1;

    for(pesquisas = 1; pesquisas<6; pesquisas++)
    {
        printf("Pesquisa %d \n", pesquisas);
        printf("Qual é a idade?");
        scanf("%d", &idade);
        printf("Qual é o indice de satisfação?");
        scanf("%d", &indiceSatisfacao);
        
        if (indiceSatisfacao == 1) {
            quantidadeNota1++;
        } else if (indiceSatisfacao == 2){
            quantidadeNota2++;
        } else if (indiceSatisfacao == 3) {
            quantidadeNota3++;
        } else if (indiceSatisfacao == 4) {
            quantidadeNota4++;
        } else if (indiceSatisfacao == 5) {
            quantidadeNota5++;
        }         
    }

    printf("Quantidade nota1 %f \n", (quantidadeNota1 / 5) * 100);
    printf("Quantidade nota2 %f \n", (quantidadeNota2 / 5) * 100);
    printf("Quantidade nota3 %f \n", (quantidadeNota3 / 5) * 100);
    printf("Quantidade nota4 %f \n", (quantidadeNota4 / 5) * 100);
    printf("Quantidade nota5 %f \n", (quantidadeNota5 / 5) * 100);
    //printf("Média das idades que responderam com nota5 %f \n", MediaIdadeNota5 / quantidadeNota5);

 }
 