#include <stdio.h>

int soma, sub, multi, div;

void somar(){
    int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%i", &n1);
    printf("Digite o segundo numero: ");
    scanf("%i", &n2);
    soma = n1 + n2;
    printf("Resultado da soma: %i\n", soma);
}

void subtrair(){
    int n1, n2;
    printf("\n");
    printf("Digite o primeiro numero: ");
    scanf("%i", &n1);
    printf("Digite o segundo numero: ");
    scanf("%i", &n2);
    sub = n1 - n2;
    printf("Resultado da subtracao: %i\n", sub);
    printf("\n");
}

void multiplicar(){
    int n1, n2;
    printf("\n");
    printf("Digite o primeiro numero: ");
    scanf("%i", &n1);
    printf("Digite o segundo numero: ");
    scanf("%i", &n2);
    multi = n1 * n2;
    printf("Resultado da multiplicacao: %i\n", multi);
    printf("\n");
}

void dividir(){
    int n1, n2;
    printf("\n");
    printf("Digite o primeiro numero: ");
    scanf("%i", &n1);
    printf("Digite o segundo numero: ");
    scanf("%i", &n2);

    if (n2 == 0) {
        printf("Erro, divisao por zero!");
    }
    else {
        div = n1 / n2;
        printf("Resultado da subtracao: %i\n", div);
    }  
    printf("\n");
}

int main() {
    int opcao;
    do{
        printf("\n=== CALCULADORA ===\n");
        printf(" 1 - Somar\n");
        printf(" 2 - Subtrair\n");
        printf(" 3 - Multiplicar\n");
        printf(" 4 - Dividir\n");
        printf("Escolha uma opcao: ");
        scanf("%i", &opcao);

        switch (opcao) {
            case 1: somar(); break;
            case 2: subtrair(); break;
            case 3: multiplicar(); break;
            case 4: dividir(); break;
            default: printf("Opcao invalida! Escolha uma opcao valida: \n");
        }        
    } while(opcao != 0);

    return 0;
}