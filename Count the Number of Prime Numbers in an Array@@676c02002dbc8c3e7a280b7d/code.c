// Your code here...
#include <stdio.h>
int isprime(int num){
    if(num==0||num==1){
        return 0;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int i,N,count=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        if(isprime(arr[i])){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}