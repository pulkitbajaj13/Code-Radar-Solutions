// Your code here...
#include <stdio.h>
int main(){
    int i,j,N,count;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        count=1;
        if(arr[i]!=-1){
            for(j=i+1;j<N;j++){
                if(arr[j]==arr[i]){
                    count++;
                    arr[j]=-1;
                }
            }
            printf("%d %d\n",arr[i],count);
        }
    }
    return 0;
}