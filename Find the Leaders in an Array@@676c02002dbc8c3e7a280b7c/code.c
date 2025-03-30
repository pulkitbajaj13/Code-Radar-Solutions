// Your code here...
#include<stdio.h>
int main(){
    int N,i,leader=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        leader=1;
        for(int j=i+1;j<N;j++){
        if(arr[i]<=arr[j]){
            leader=0;
            break;
        }
    }
    if(leader){
        printf("%d ",arr[i]);
    }
    }
     return 0;
}