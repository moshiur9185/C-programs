#include<stdio.h>
int main(){
    int i,j,k,rows;
    printf("Enter rows number: ");
    scanf("%d",&rows);

    for(i=1; i<=rows; i++){
        for(j=1; j<=rows-i; j++){
            printf(" ");
        }
        for(k=1; k<=(2*i-1); k++){
            printf("m");
        }
        printf("\n");
    }
    return 0;
}
