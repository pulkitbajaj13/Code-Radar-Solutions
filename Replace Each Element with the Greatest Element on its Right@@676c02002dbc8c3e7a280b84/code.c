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
        for(int j=i+1;j<N;j++){
        if(arr[i]>arr[j]){
            arr[j]=arr[i];
            printf("%d ",arr[i]);
        }
    }
    }
     return 0;
}