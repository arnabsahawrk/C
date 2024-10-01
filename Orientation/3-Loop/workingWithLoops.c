#include<stdio.h>

int main(){
    int n;

    scanf("%d", &n);

//print 1 to N;
    for (int i = 1; i <=n; i++)
    {
        printf("%d, ", i);
    }

    //print A to Z

    for(int i='A'; i<='Z'; i++){
        printf("%c, ", i);
    }

    //summation of 1 to N;

    int sum = 0;

    for(int i=1; i<=n; i++){
        sum+=i;
    }

    printf("\nSummation of 1 to N: %d", sum);

    return 0;
    
}