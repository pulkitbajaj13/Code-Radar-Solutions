// Your code here...
#include <stdio.h>
int isPrime(int num){
    if(num<2) 
    return 0;
    for(int i=2;i*i<=num;i++){
        if(num%i==0) 
        return 0;
    }
    return 1;
}
int printPrimesInRange(int a,int b){
    for(int num=a;num<=b;num++){
        if(isPrime(num)){
            printf("%d ",num);
        }
        }else
        printf("No prime numbers");
    }
