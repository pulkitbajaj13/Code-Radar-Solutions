#include <stdio.h>
int main(){
    int N,i,secondlargest,max;
    scanf("%d",&N);
       if(N<2){
        printf("-1");
        return 0;
    }
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0]=secondlargest;
    for(i=0;i<N;i++){
        if(arr[i]>max){
            secondlargest=max;
            max=arr[i];
        }
    }
    for(i=0;i<N;i++){
            if(arr[i]>secondlargest && arr[i]<max)
            secondlargest=arr[i];
        }
    printf("%d",secondlargest);
    return 0;
}