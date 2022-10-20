#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main(int argc, char *argv[]) {

	char palavra[100];
	int indice = 0;
	int indice2 = 0;
	int indice3 = 0;
	printf("Digite uma palavra: ");
	scanf("%s", &palavra);
	
	char alfabeto[] = "abcdefghijklmnopqrstuvxwyz";
	int qntLetra[26];

	for (indice = 0; indice<strlen(alfabeto);indice++)
	{
		qntLetra[indice]=0;
		for(indice2 = 0; indice2<strlen(palavra);indice2++){
			if(palavra[indice2] == alfabeto[indice]){
				qntLetra[indice] = qntLetra[indice] + 1; 	
			}
		}
	}
	for(indice3 = 0;indice3<strlen(alfabeto);indice3++){
		printf("%c: %d ",alfabeto[indice3], qntLetra[indice3]);
	}
}
