// Your code here...
#include <stdio.h>
#include <limits.h>
int main(){
    int i,N,max,secondmax;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    max = secondmax = INT_MIN;
    for(i=0;i<N;i++){
        if(arr[i]>max){
            secondmax=max;
            max=arr[i];
        }
        else if(arr[i]>secondmax && arr[i]<max){
            secondmax=arr[i];
        }
    }
    printf("%d",max*secondmax);
    return 0;
}