// Your code here...
#include <stdio.h>
#include <math.h>
int totalLikes(int num){
    int sum=0,players=5,b;
    while(num>0){
        b=players/2;
        sum=sum+b;
        players=b*3;
        num=num-1;
    }
    return sum;
}