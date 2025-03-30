// Your code here...
#include <stdio.h>
int main(){
    int i,N;
    scanf("%d",&N);
    int sum[1000]={0};
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    sum[0]=arr[0];
    for(i=0;i<N;i++){
        sum[i]=sum[i-1]+arr[i];
    }
    for(i=0;i<N;i++){
        printf("%d ",sum[i]);
    }
    return 0;
}