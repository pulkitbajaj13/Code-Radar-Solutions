// Your code here...
for(int i=0;i<n;i++){
printf("%d ",fibonacciseries(n));
}
int fibonacciseries(n){
    if(n==0){
        return 0;
    }if(n==1){
        return 1;
    }
    return fibonacciseries(n-1) + fibonacciseries(n-2);
}