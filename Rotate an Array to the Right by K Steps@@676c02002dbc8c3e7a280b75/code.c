// Your code here...
#include <stdio.h>
int main(){
    int k,temp,N,i,shifts;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&shifts);
    for(k=1;k<=shifts;k++){
        temp=arr[N-1];
        for(i=N-1;i>0;i--){
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
    }
    for(i=0;i<N;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}