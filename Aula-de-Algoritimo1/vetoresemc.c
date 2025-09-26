#include <stdio.h>

int main() {
    int numeros[10];
    int i;
    int maior, menor;
    int pares = 0, impares = 0;
    int soma = 0;
    int x, encontrado = 0;

    for(i = 0; i < 10; i++) {
        printf("diga o %d numero menokk: ", i + 1);
        scanf("%d", &numeros[i]);

        if(i == 0) {
            maior = numeros[i];
            menor = numeros[i];
        }

        if(numeros[i] > maior) {
            maior = numeros[i];
        }

        if(numeros[i] < menor) {
            menor = numeros[i];
        }

        if(numeros[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        soma = soma + numeros[i];
    }

    printf("\nnumeros dizidos\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\nmaior numero: %d", maior);
    printf("\nmenor numero: %d", menor);
    printf("\nquantidade de pares: %d", pares);
    printf("\nquantidade de impares: %d", impares);
    printf("\nmedia: %.2f", soma / 10.0);

    printf("\n\ndigita um numero pra buscar ae");
    scanf("%d", &x);

    for(i = 0; i < 10; i++) {
        if(numeros[i] == x) {
            printf("numero %d encontrado na posicao %d.\n", x, i);
            encontrado = 1;
            break;
        }
    }

    if(encontrado == 0) {
        printf("esse numero ae %d nao foi passado aqui no bgl.\n", x);
    }

    return 0;
}
