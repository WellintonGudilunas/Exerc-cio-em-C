#include <stdio.h>
#include <stdlib.h>
int linha = 0;
int contLinha = 0;

int main()
{
	int valor;
	printf("Digite um número: ");
	scanf("%d", &valor);
	
	sla(valor);
	return 0;
}

void sla(int numero)
{
	for (linha = 0; linha < numero; linha++)
	{	
		for (contLinha = 0; contLinha <= linha; contLinha++)
		{
			printf("%d ", contLinha +1);
		}	
		printf("\n");
	}
}

/*
int soma = 0;

int calculo(int NumeroA, int NumeroB)
{	
	return NumeroA+NumeroB;
}
int main(int argc, char * argv[]) 
{
	int a=19;
	int b=4;
	soma = calculo(a, b);
	printf(" a soma é %d", soma);
	return 0;
}
int soma = 0;

void calculo(int NumeroA, int NumeroB)
{	
	soma= NumeroA+NumeroB;
}
int main(int argc, char * argv[]) 
{
	int a=5;
	int b=9;
	calculo(a, b);
	printf(" a soma é %d", soma);
	return 0;
}
*/
	

