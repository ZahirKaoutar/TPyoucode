/*

5. Écrivez un programme qui demande à l'utilisateur d'entrer une valeur pour x, puis
affiche la valeur du polynôme suivant :
int x;



*/
#include <stdio.h>
#include <math.h>
int main(){
    int x;
    int res;
  printf("entrer votre valeur de x:");
  scanf("%d",&x);
  res=3*pow(x,5)+2*pow(x,4)-2*pow(x,3)+2*pow(x,2)+7*x;
  printf("la polyneme est:%d",res);  



}