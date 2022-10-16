#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main(int argc, char const *argv[])
{
    int qtdLinha, qtdColuna, linha = 7, coluna = 7;
    int matriz[linha][coluna];
    int ponto1 = 1, ponto2 = 0;

  	matriz[0][0]= 0, matriz[0][1]= 2, matriz[0][2]= 11, matriz[0][3]= 6, matriz[0][4]= 15, matriz[0][5]= 11, matriz[0][6]= 01;

    matriz[1][0]= 02, matriz[1][1]= 0, matriz[1][2]= 7, matriz[1][3]= 12, matriz[1][4]= 4, matriz[1][5]= 2, matriz[1][6]= 15;

    matriz[2][0]= 11, matriz[2][1]= 7, matriz[2][2]= 0, matriz[2][3]= 11, matriz[2][4]= 8, matriz[2][5]= 3, matriz[2][6]= 13;

    matriz[3][0]= 6, matriz[3][1]= 12, matriz[3][2]= 11, matriz[3][3]= 0, matriz[3][4]= 10, matriz[3][5]= 2, matriz[3][6]= 1;

    matriz[4][0]= 15, matriz[4][1]= 4, matriz[4][2]= 8, matriz[4][3]= 10, matriz[4][4]= 0, matriz[4][5]= 5, matriz[4][6]= 13;
    
    matriz[5][0]= 11, matriz[5][1]= 2, matriz[5][2]= 3, matriz[5][3]= 2, matriz[5][4]= 5, matriz[5][5]= 0, matriz[5][6]= 14;
    
    matriz[6][0]= 1, matriz[6][1]= 15, matriz[6][2]= 13, matriz[6][3]= 1, matriz[6][4]= 13, matriz[6][5]= 14, matriz[6][6]= 0;

    printf("\n\n A matriz criada foi: \n\n");
    for (qtdLinha=0; qtdLinha < linha; qtdLinha++)
    {
        for (qtdColuna=0; qtdColuna < coluna; qtdColuna++)
        {
            if (qtdColuna > qtdLinha)
            {
                printf("%d\t", matriz[qtdLinha][qtdColuna]);
            }
            else
            {
               printf("-\t");
            }
            
        }
        printf("\n");
    }
    while (ponto1 != ponto2)
    {
        printf("Digite o primeiro ponto: ");
        scanf("%d", &ponto1);
        printf("Digite o segundo ponto: ");
        scanf("%d", &ponto2);
        if (ponto1 > 6 || ponto2 > 6)
        {
            printf("Número inválido.");
            break;
        }
        if (ponto1 == ponto2) 
        {
            printf("-");
            break;
        }
        printf("O tempo é: %d minutos \n", matriz[ponto1][ponto2]);   
    }
}

