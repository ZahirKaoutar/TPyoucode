/*2. Écrivez un programme qui calcule le volume d'une sphère de 10 mètres de rayon
en utilisant la formule v = 4/3πr3 . Écrivez la fraction 4/3 comme 4.0f/3.0f.
(Essayez de l'écrire comme 4/3. Que se passe-t-il ?)
Indice : C n'a pas d'opérateur d'exponentiation, vous devrez donc multiplier r par
lui-même deux fois pour calculer r
3*/
#include <stdio.h>
int main(){
    int r=10;
float v;
float p=3.14;
v=4.0f/3.0f*p*r*r*r;
printf("le volume de sphére est: %f",v);


}

