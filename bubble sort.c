#include<stdio.h>
#define n 10

int main(){
    int i,j,temp, arr[n]={5,6,4,7,3,85,77,55,66,99};
    for(j=0; j<=n-1; j++){
        for(i=0; i<n-j; i++){
            if(arr[i] < arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
