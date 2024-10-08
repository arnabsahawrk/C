#include<stdio.h>
int main(){

    unsigned short int N;

    while (scanf("%hu", &N) != EOF)
    {
        if(N==1999){
            printf("Correct");
            break;
        }
        else printf("Wrong\n");
    }
    

    return 0;
}