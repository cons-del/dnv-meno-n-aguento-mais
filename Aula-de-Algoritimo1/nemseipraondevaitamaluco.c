#include <stdio.>

int main(){
   
   float valor_a, valor_b, valor_c;
   float media;
   int condicao = 1;
   
   
   while (condicao == 1)

      printf("Digite tres valores: ");
      scanf("%f %f %f",&valor_a,&valor_b,&valor_c);

      media = (valor_a+valor_b+valor_c)/3; 


      printf("Sua media e: %f\n", media);
      condicao = condicao + 1;


return 0;
}