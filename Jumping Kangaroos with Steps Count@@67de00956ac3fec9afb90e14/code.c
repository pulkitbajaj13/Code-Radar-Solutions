// Your code here...
#include <stdio.h>
int kangaroo(int x1,int v1,int x2,int v2){
    for(int i=1;i<100;i++){
        if(x1+(i*v1)==x2+(i*v2)){
             return i;
        }
    }
    return -1;
}