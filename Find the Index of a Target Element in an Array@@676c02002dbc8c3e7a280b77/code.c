// Your code here...
#include <stdio.h>
int main(){
    int i,N,key,found=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    for(i=0;i<N;i++){
        if(arr[i]==key){
            printf("%d",i);
            found=1;
        }
    }
    if(!found){
        printf("-1");
    }
    return 0;
}