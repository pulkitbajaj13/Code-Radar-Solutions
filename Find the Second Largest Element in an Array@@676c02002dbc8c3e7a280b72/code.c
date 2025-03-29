#include <stdio.h>
int main(){
    int N,i,secondlargest,max;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<N;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    secondlargest=max;
    for(i=0;i<N;i++){
        if(arr[i]<max){
            if(arr[i]>secondlargest)
            secondlargest=arr[i];
        }
    }
    printf("%d",secondlargest);
    return 0;
}