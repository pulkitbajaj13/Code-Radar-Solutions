// Your code here...
#include <stdio.h>
int main(){
    int arr[100],i,j,n,count;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        count=1;
        if(arr[i]!=-1){
            for(j=i+1;j<n;j++){
                if(arr[j]==arr[i]){
                    count++;
                    arr[j]=-1;
                }
            }
            printf("\n%d %d",arr[i],count);
        }
    }
    return 0;
}