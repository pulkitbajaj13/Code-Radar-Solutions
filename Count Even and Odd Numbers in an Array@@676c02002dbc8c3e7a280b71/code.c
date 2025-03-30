// Your code here...
#include <stdio.h>
int main(){
    int i,N,oddcount=0,evencount=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        if(arr[i]%2==0){
            evencount++;
        }
        else
        oddcount++;
    }
    printf("%d %d",evencount,oddcount);
    return 0;
}