// Your code here...
#include <stdio.h>
int main(){
    int i,N,j;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            if(arr[i]==arr[j]){
                printf("%d",arr[i]);
            }
        }
    }
    return 0;
}