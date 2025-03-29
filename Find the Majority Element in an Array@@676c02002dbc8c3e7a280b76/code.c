// Your code here...
#include <stdio.h>
int main() {
    int N,i,maxcount=0,maxelement;
    scanf("%d",&N);
    int arr[N];
    int freq[1000]={0};
    for (i=0;i<N;i++){
        scanf("%d",&arr[i]);
        freq[arr[i]]++;
        if(freq[arr[i]]>maxcount) {
            maxcount=freq[arr[i]];
            maxelement=arr[i];
        }
    }
    if(maxcount>N/2){
        printf("%d",maxelement);
    } else{
        printf("-1");
    }
    return 0;
}