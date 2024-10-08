#include<stdio.h>
int main(){
    unsigned short int N;
    scanf("%hu", &N);

    unsigned short int firstDigit = N/10;
    unsigned short int secondDigit = N%10;

    if(secondDigit!=0 && firstDigit%secondDigit == 0 || secondDigit%firstDigit == 0) printf("YES");
    else printf("NO");

    return 0;
}