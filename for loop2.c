#include<stdio.h>

int main(){
    int i, j, lastNum;

    printf("Enter First & last number: \n");
    scanf("%d %d",&i, &lastNum);

    for(i; i<=lastNum; i++){
        int isPrime = 1;
        for(j=2; j<i; j++){
            if(i%j == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1){
            printf("%d ", i);
        }
    }
    return 0;
}


