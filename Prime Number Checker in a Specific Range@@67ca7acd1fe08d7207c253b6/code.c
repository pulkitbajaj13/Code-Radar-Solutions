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
void printPrimesInRange(int a,int b){
    int found=0;
    for(int num=a;num<=b;num++){
        if(isPrime(num)){
            if(found){
                printf(" ");
            }
            printf("%d",num);
            found=1;       
        }
        }
        if(!found)
        printf("No prime numbers");
    }
