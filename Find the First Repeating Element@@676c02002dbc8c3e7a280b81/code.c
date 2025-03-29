// Your code here...
#include <stdio.h>
int main() {
    int N,i,maxcount=0,maxelement,found=0;
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
            found=1;
        }
    }
    if(found==1){
    printf("%d\n",maxelement); 
    }
    else
    printf("-1");
    return 0;
}