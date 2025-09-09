#include <stdio.h>
#include <string.h>
int main(){
char nom1[100];
char nom2[100];

printf("entrer premier chaine ");
gets(nom1);

printf("entrer deusieme chaine ");
gets(nom2);

int size1=strlen(nom1);
int size2=strlen(nom2);
int count=0;
int i,j;
printf("%s\n",nom1);
printf("%s\n",nom2);



for(i=0,j=0;i<size1,j<size2;i++,j++){
    if(nom1[i]!=nom2[j]){
        count++;
    }
}
printf("distance de est :%d",count);


   
return 0;
}
