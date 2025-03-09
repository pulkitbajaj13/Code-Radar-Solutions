// Your code here...
fibonacciseries(n-1);
int fibonacciseries(n){
    if(n==0){
        return 0;
    }if(n==1){
        return 1;
    }
    return fibonacciseries(n-1) + fibonacciseries(n-2);
}