#include<stdio.h>
int main(){
    int arr[]={2,5,1,3};
    int i,j, min_index;

    for(i=0; i<5; i++){
        min_index = i;
        for(j = i+1; j<5; j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index]= temp;
    }
    for(i=0; i<4; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
