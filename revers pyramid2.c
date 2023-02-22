#include<stdio.h>
int main(){
    int m,n,o,rows;
    printf("Enter rows number : ");
    scanf("%d", &rows);
    for(m=rows; m>=0; m--){
        for(n=m; n<rows; n++){
            printf(" ");
        }
        for(o=1; o<=(2*m-1); o++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
