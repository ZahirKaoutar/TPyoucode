#include<stdio.h>
int main(){
    int l;
    int i,j;
    printf("donner le nombre de ligne");
    scanf("%d",&l);
    for(j=0;j<l;j++){
        for(i=0;i<j-10;i++){
            if(j>l/2 && j==1)printf("*");
            
        }
        printf("*\n");
    }
    return 0;

}