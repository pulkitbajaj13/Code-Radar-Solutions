// Your code here...
#include <stdio.h>
void Count_ele(int a[],int N,int ele){
    int i,count=0;
    for(i=0;i<N;i++){
        if(a[i]==ele){
            count++;
        }
    }
    printf("%d",count);
}
int main(){
    int N,i,ele;
    scanf("%d %d",&N,&ele);
    int a[N];
    for(i=0;i<=N-1;i++){
        scanf("%d",&a[i]);
    }
    Count_ele(a,N,ele);
    return 0;
}