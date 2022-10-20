#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


void main(int argc, char *argv[]) {
	
	int numero[10];
	int cont;
	for (cont = 0; cont<10; cont++)
	{
		printf("Digite o n�mero %d: ", cont+1);
		scanf("%d, ", &numero[cont]);
	} 
	
	printf("N�meros digitados na ordem em que foi digitada: \n");
	for (cont = 0; cont<10; cont++){
		printf("%d, ", numero[cont]);
	}
	
	printf("\n\n");
	
	printf("N�meros digitados na ordem CONTRARIA em que foi digitada: \n");
	for (cont = 9; cont>=0; cont--){
		printf("%d, ", numero[cont]);
	 }
	
	// printf("Numeros na ordem em que foi digitada: %d, %d, %d, %d, %d, %d, %d, %d, %d, %d \n", numero[0], numero[1], numero[2], numero[3], numero[4],
	// numero[5], numero[6], numero[7], numero[8], numero[9] );
	
	// printf("Numeros na ordem CONTRARIA em que foi digitada:%d, %d, %d, %d, %d, %d, %d, %d, %d, %d \n ", numero[9], numero[8], numero[7], numero[6],
	// numero[5], numero[4], numero[3], numero[2], numero[1], numero[0] );
}
