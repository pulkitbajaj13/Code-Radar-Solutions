// Your code here...
#include<stdio.h>
int main(){
     int N,i;
     scanf("%d",&N);
     int arr[N];
     for(i=0;i<N;i++){
         scanf("%d",&arr[i]);
     }
     for(i=0;i<N;i++){
         if(arr[i]>arr[N-i]){
             printf("%d",arr[i]);
         }
     }
     return 0;
 }