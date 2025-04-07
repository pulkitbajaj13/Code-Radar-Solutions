// Your code here...
#include <stdio.h>

int mostPlayedGame(int arr[],int n){
    int most=-1;
    int maxcount=0;
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
            most=arr[i];
        }
        if(count==maxcount){
            if(arr[i]<most){
                most=arr[i];
            }
        }
    }
    return most;
}