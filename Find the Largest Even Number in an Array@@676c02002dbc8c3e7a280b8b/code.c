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
    evenmax = INT_MIN;
    for(i=0;i<N;i++){
        if(arr[i]%2==0 && arr[i]>evenmax){
            evenmax=arr[i];
        }
    }
    if(evenmax==INT_MIN){
        printf("-1");
    }
    else{
    printf("%d",evenmax);
    }
    return 0;
}