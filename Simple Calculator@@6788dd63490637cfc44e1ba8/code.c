#include <stdio.h>

int main() {
    int a,b,;
    char operator;
    scanf("%d %d ",&a,&b);
    scanf("%c",&operator);
    switch(operator){
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%d",a/b);
        break;
        default:
        printf("erorr");

    }
    return 0;
}