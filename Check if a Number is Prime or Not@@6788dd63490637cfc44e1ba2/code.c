#include <stdio.h>

int main(){
    int i,ctr=0,a;
    scanf("%d",&a);
    for(i=a;i<=a/2;i++)
    {
        if(a%i==0)
            ctr++;
    }
    if(ctr==0)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}