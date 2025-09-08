#include <stdio.h>
        
int main(){
    int numero, i = 1;
     
     printf("Digite seu numero inteiro:");
     scanf ("%d", &numero);
     printf("n\tabuada do %d:\n");
     
     while ( i <= 10){
      printf("%d x %d = %d\n", numero, i, numero * i);
      i++; 

     }
            

 return 0;
}
        