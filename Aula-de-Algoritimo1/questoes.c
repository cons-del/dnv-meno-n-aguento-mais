#include <stdio.h>
int main(){
 
    float n1 , n2 , n3 , media;
    int faltas;

    printf("Digite sua nota 1:");
    scanf("%f", &n1);

    printf("Digite sua nota 2:");
    scanf("%f", &n2);

    printf("Digite sua nota 3:");
    scanf("%f", &n3);

    printf("Digite sua quantidade de faltas:");
    scanf("%d",&faltas);

    media = (n1 + n2 + n3)/3;

    if (media == 0 && faltas > 18){
        printf("Resultado: SR\n");
    
    }else if (faltas > 18){
        printf("Resultado: Reprovado por faltas!");
    
    }else if ( media <=10 , faltas <= 18 ){
        printf("Resultado: MS");
    
    }else if ( media <=7 , faltas <= 18 ){
        printf("Resultado: MM");    
    
    }else if ( media <=5 , faltas <= 18 ){
        printf("Resultado: MI");
    
    }else if ( media <=3 , faltas <= 18 ){
        printf("Resultado: II ");    


    }
    

    return 0;

}