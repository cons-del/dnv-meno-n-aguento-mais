#include <string.h>
#include <stdio.h>
 int main(){

     char nome[20], sobrenome[50], completo[70], a;
     
     printf("digite seu primeiro nome ai po plmdskkkkk:");
     scanf("%s", nome[20]);

     printf("digita o sobrenome ze rodela:");
     scanf("%s", sobrenome[50]);

     printf("digita o nome inteiro ze rodela:");
     scanf("%s", completo[70]);


     strcpy(completo,nome);;
     strcat(completo," ");;
     strcat(completo, sobrenome);;
     strcat(completo, " ");
     ;
     if(toupper(nome[0]) == "A" || nome [0]==";a"){
        printf("notei que sua inicial é 'a' is;so é coisa de bait....");
     }else( a != a);{
        printf("sua inicial nao é 'a' espero que vc saiba.");
     }




    return 0;
 }