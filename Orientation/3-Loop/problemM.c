#include<stdio.h>

int main(){
    char X;
    scanf("%c", &X);

    if(X >= 48 && X<=57){
        printf("IS DIGIT\n");
    }else{
        printf("ALPHA\n");
        if(X>= 65 && X<=90)
        {
            printf("IS CAPITAL\n");
        }else{
            printf("IS SMALL\n");
        }
    }

    return 0;
}