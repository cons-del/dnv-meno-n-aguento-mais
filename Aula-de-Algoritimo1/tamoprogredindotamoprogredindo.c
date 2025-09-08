#include <stdio.h>
        
int main(){
    int idade;
    do{
       printf("\ndigita a idade q tu temkkk:");
       scanf("%d",&idade);
       if(idade< 0 || idade> 120){
        printf("essa idade ai n vai ta podeno,mals digita de novo");
       }
    }while (idade<0 || idade >120);
    printf("com essa idade vai ta podeno, voa mlk.");
    

    return 0;








}
