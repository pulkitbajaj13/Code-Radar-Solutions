// Your code here...
#include <stdio.h>
int isprime(int a);
int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d",&n);
        printf("%d\n",isprime(n));
    }
    return 0;
}
int isprime(int n){
    if (n<2) 
    return 0;
    for (int i=2;i*i<=n;i++){
        if (n%i==0) 
        return 0;
    }
    return 1;
}