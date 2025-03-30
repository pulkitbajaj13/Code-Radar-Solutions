// Your code here...
#include <stdio.h>
#include <limits.h>
int main(){
    int N,i,min,secondmin;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    min=secondmin=INT_MAX;
    for(i=0;i<N;i++){
        if(arr[i]<min){
            secondmin=min;
            min=arr[i];
        }
        else if(arr[i]>min && arr[i]<secondmin){
            secondmin=arr[i];
        }
    }
    printf("%d %d",min,secondmin);
    return 0;
}