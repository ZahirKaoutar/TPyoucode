#include <stdio.h>
int main(){
    q7:int montant;

int rest1;
int rest2;
int rest3;

printf("entrer le montant en dolart: ");
scanf("%d",&montant);
printf("billet de 20$ : %d \n ",montant/20);
rest1=montant%20;
printf("billet de 10$ : %d  \n",rest1/10);
rest2=rest1%10;
printf("billet de 5$ : %d  \n",rest2/5);
rest3=rest2%5;
printf("billet de 1$ :%d  \n ",rest3/1);

}