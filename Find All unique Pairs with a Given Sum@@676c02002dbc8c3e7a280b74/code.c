// Your code here...
#include <stdio.h>
int main(){
    int N,i;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int T;
    scanf("%d",&T);
    for(i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]+arr[j]==T){
            printf("%d %d\n",arr[i],arr[j]);
        }
        else if(arr[i]==arr[j]){
            printf("%d %d\n",arr[i],arr[j]);
            break;
        }
    }
    }
    return 0;
}