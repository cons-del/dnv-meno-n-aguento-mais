#include <stdio.h>

int main(){ 

float numero, soma = 0;
int contador= 0;

printf("digite numeros reais maiores que zero(digite 0):\n");
   while (numero> 0){
      scanf("%f, &numero);");
      if(numero == 0){
        printf("nao foi encontrado nenhum numero");
      }
       if(numero > 0){
        soma += numero;
        contador++;
       }else{
        printf("numero invalido digite apenas maiores que zero ou 0 para encerrar");
       }
   }

       if(contador ==0){
        printf("não foi encontrado nenhum numero\n");
       }else{
        printf("quantidade de numeros: %d\n");
        printf("media: %f\n", soma / contador);
       }



 return 0;
}