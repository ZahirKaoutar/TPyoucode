/*Prenons un exemple pour mieux comprendre :

L’utilisateur entre : 100.00 (c’est le montant en dollars et cents).

Le programme doit ajouter 5 % de taxe, donc ici :

*/

#include <stdio.h>
int main(){
float montant;
  float tax=0.05;
  float res;
  float taxAj;
  printf("entrer le montant en dollars  et en cent ");
  scanf("%f",&montant);
  res=montant*tax;
  taxAj=res+montant;
  printf("le tax ajouté est  %f: ",taxAj);
  return 0;}

