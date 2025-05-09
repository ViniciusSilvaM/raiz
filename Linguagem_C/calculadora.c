#include <stdio.h>

int soma;

int sub;

int multi;

int div;

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
    div = n1 / n2;
    printf("Resultado da subtracao: %i\n", div);
    printf("\n");
}

int main() {
    somar();
    subtrair();
    multiplicar();
    dividir();
}