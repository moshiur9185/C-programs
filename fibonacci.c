#include <stdio.h>

int main(){
    int i,j,k,start,end;

    printf("Enter the start value: ");
    scanf("%d",&start);

    printf("Enter the end value: ");
    scanf("%d",&end);
    i=0;
    j=1;
    k=0;
    while(k<=end){
        if(k>=start){
            print("%d",k);
        }
        i=j;
        j=k;
        k=i+j;
    }
}
