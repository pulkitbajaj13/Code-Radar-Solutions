// Your code here...
#include <stdio.h>
int main(){
    int i,N,sum[1000]=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        sum[i]+=arr[i];
    }
    for(i=0;i<N;i++){
        printf("%d ",sum[i]);
    }
    return 0;
}