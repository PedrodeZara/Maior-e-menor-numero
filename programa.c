#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int maior_numero(int num1, int num2, int num3) {
    if (num1 > num2 && num1 > num3) {
        return num1;
    }
    else if (num2 > num3) {
        return num2;
    }
    else {
        return num3;
    }
}

int menor_numero(int num1, int num2, int num3) {
    if (num1 < num2 && num1 < num3) {
        return num1;
    }
    else if (num2 < num3) {
        return num2;
    }
    else {
        return num3;
    }
}

void main() {
    int num1, num2, num3;

    setlocale(LC_ALL, "Portuguese");

    printf("\n\n\t\tBoa tarde\t\t\n\n");
    printf("Digite três números abaixo: \n");
    scanf("%d %d %d",&num1, &num2, &num3);

    int maior = maior_numero(num1,num2,num3);
    int menor = menor_numero(num1,num2,num3);

    printf("\n\nSeu maior número é: %d\nSeu menor número é: %d",maior,menor);
}