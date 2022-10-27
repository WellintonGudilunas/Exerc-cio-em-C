#include <stdio.h>
#include <stdlib.h>
int opcao;
int num1, num2;
int n1, n2;
int decisao;
void main()
{
    printf("Essa é uma calculadora em C\n\n");
    apresentacao();
}
void apresentacao() 
{
    printf("As opções são: \n1- Soma\n2- Subtração\n3- Multiplicação\n4- Divisão\n");
    printf("Escolha qual cálculo deseja fazer: ");
    scanf("%d", &opcao);
    switch (opcao) 
    {
        case 1: 
            soma(num1, num2);
            break;
       case 2: 
            menos(num1, num2);
            break;
        case 3: 
            vezes(num1, num2);
            break;
        case 4: 
            dividir(num1, num2);
            break;
        default: 
            printf("\n\nOpção inválida, digite uma opção válida!!!\n");
            apresentacao(); break;
    }
}

void soma(int n1,int n2)
{
    float resSoma;
    printf("Você escolheu fazer uma Soma\n");
    printf("Agora digite os números que deseja somar\n");
    printf("Primeiro número: ");
    scanf("%d", &n1);
    printf("Agora, o segundo número: ");
    scanf("%d", &n2);
    resSoma = n1+n2;
    printf("A soma entre %d e %d é igual a %f", n1, n2, resSoma);
    
    printf("\n\nDeseja continuar fazendo uma soma? \n1 para SIM \n2 para NAO (sair) \n3 para voltar para o menu\n");
    printf("Digite sua decisão: ");
    scanf("%d", &decisao);
    switch (decisao)
    {
        case 1: 
            soma(num1, num2);
            break;
        case 2: 
            printf("FIM");
            break;
        case 3: 
            apresentacao();
            break;
        default:
            printf("Opção inválida, programa encerrado!!");
            break;
    }
}
void menos(int n1,int n2)
{
    float resMenos;
    printf("Você escolheu fazer uma Subtração\n");
    printf("Agora digite os números que deseja subtrair\n");
    printf("Primeiro número: ");
    scanf("%d", &n1);
    printf("Agora, o segundo número: ");
    scanf("%d", &n2);
    resMenos = n1-n2;
    printf("A subtração entre %d e %d é igual a %f", n1, n2, resMenos);
    
    printf("\n\nDeseja continuar fazendo uma subtração? \n1 para SIM \n2 para NAO (sair) \n3 para voltar para o menu\n");
    printf("Digite sua decisão: ");
    scanf("%d", &decisao);
    switch (decisao)
    {
        case 1: 
            menos(num1, num2);
            break;
        case 2: 
            printf("FIM");
            break;
        case 3: 
            apresentacao();
            break;
        default:
            printf("Opção inválida, programa encerrado!!");
            break;
    }
}
void vezes(int n1,int n2)
{
    float resVezes;
    printf("Você escolheu fazer uma multiplicação\n");
    printf("Agora digite os números que deseja multiplicar\n");
    printf("Primeiro número: ");
    scanf("%d", &n1);
    printf("Agora, o segundo número: ");
    scanf("%d", &n2);
    resVezes = n1*n2;
    printf("A multiplicação entre %d e %d é igual a %f", n1, n2, resVezes);
    
    printf("\n\nDeseja continuar fazendo uma Multiplicação? \n1 para SIM \n2 para NAO (sair)  \n3 para voltar para o menu\n");
    printf("Digite sua decisão: ");
    scanf("%d", &decisao);
    switch (decisao)
    {
        case 1: 
            vezes(num1, num2);
            break;
        case 2: 
            printf("FIM");
            break;
        case 3: 
            apresentacao();
            break;
        default:
            printf("Opção inválida, programa encerrado!!");
            break;
    }
}
void dividir(int n1,int n2)
{
    float resDivisao;
    printf("Você escolheu fazer uma divisão\n");
    printf("Agora digite os números que deseja dividir\n");
    printf("Primeiro número: ");
    scanf("%d", &n1);
    printf("Agora, o segundo número: ");
    scanf("%d", &n2);
    resDivisao = n1/n2;
    printf("A divisão entre %d e %d é igual a %f", n1, n2, resDivisao);
   
    printf("\n\nDeseja continuar fazendo uma divisão? \n1 para SIM \n2 para NAO (sair) \n3 para voltar para o menu\n");
    printf("Digite sua decisão: ");
    scanf("%d", &decisao);
    switch (decisao)
    {
        case 1: 
            dividir(num1, num2);
            break;
        case 2: 
            printf("FIM");
            break;
        case 3: 
            apresentacao();
            break;
        default:
            printf("Opção inválida, programa encerrado!!");
            break;
    }
}