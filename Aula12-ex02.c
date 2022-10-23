#include <stdio.h>
#include <stdlib.h>

int main() {
	int linhas = 0;
	int colunas = 0;
	printf("Digite a quantidade de linhas: ");
	scanf("%d", &linhas);
	printf("Digite a quantidade de colunas: ");
	scanf("%d", &colunas);
	

	DesenheRetangulo(linhas, colunas);
}

void DesenheRetangulo(int linhas, int colunas)
{
	int cont=0;
	int cont2=0;
		printf("+"); 
		for (cont2=0; cont2<colunas; cont2++)
		{
		printf("-");
		}
		printf("+\n");
	
	for(cont =0; cont < linhas; cont++)
	{
		printf("|");
		for(cont2=0; cont2<colunas; cont2++)
		{
			printf(" ");
		}
		printf("|\n");
	}
	
	printf("+"); 
		for (cont2=0; cont2<colunas; cont2++)
		{
		printf("-");
		}
		printf("+\n");
}


