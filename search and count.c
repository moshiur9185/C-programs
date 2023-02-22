#include<stdio.h>
#define N 10

int main(){
    int arr[N], i, key, count = 0;

    printf("Enter intiger array element: ");
    for(i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter your key: ");
    scanf("%d", &key);
    for(i = 0; i<N; i++){
        if(arr[i] == key){
            printf("%d has appeared at position index %d in array. \n", key, i);
            count++;
        }
    }
    printf("\n%d has %d times in array", key, count);
    return 0;
}
