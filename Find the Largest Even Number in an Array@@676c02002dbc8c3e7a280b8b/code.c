// Your code here...
#include <stdio.h>
#include <limits.h>
int main(){
    int i,N,evenmax;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        if(arr[i]%2==0 && arr[i]>evenmax){
            evenmax=arr[i];
        }
    }
        printf("%d",evenmax);
    else{
        printf("-1");
    }
    return 0;
}