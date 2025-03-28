// Your code here...
#include <stdio.h>
int main(){
    int N,i,j,temp;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N-1;i++){
        for(j=0;j<N-i-1;j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        printf("Not Sorted\n");
    }
    for(i=0;i<N-1;i++){
        for(j=0;j<N-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        printf("Sorted");
    }
    return 0;
}