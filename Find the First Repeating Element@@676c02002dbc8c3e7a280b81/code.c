#include <stdio.h>
int main() {
    int N,i,maxcount=0,maxelement;
    scanf("%d",&N);
    if(N<2){
        printf("-1");
        return 0;
    }
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
    printf("%d\n",maxelement); 
    return 0;
}