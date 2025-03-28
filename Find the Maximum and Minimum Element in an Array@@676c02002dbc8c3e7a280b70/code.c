// Your code here...
#include <stdio.h>
int main(){
    int i,max,min,N;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(i=0;i<N;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(i=0;i<N;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}