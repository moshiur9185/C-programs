#include<stdio.h>
int main(){
    int i,j,k,rows;
    printf("Enter rows number: ");
    scanf("%d", &rows);

    for(i=0; i<=rows; i++){
        for(j=1; j<=rows-i; j++){
            printf("  ");
        }
        for(k=1; k<=(4*i-2); k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
