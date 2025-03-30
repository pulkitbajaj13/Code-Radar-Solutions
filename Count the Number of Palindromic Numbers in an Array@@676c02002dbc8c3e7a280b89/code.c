// Your code here...
#include <stdio.h>
int ispalindrome(int num){
    int rev=0,temp=num;
    while(temp>0){
        rev = rev*10 + temp%10;
        temp/=10;
    }
    if(rev==num){
        return 1;
    }
    return 0;
}
int main(){
    int N,i,count=0;
    scanf("%d",&N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<N;i++){
        if(ispalindrome(arr[i])){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}