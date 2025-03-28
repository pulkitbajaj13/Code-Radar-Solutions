// Your code here...
#include <stdio.h>
int sumofdigits(int num){
    if(num==0)
        return 0;
    if(num<0){
        num=-num;
    }
    return (num%10)+sumofdigits(num/10);
}
int main(){
    int N,i;
    scanf("%d",&N);
    int arr[N],sumarr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        sumarr[i]=sumofdigits(arr[i]);
    }
    for(i=0;i<N;i++){
        printf("%d ",sumarr[i]);
    }
    return 0;
}