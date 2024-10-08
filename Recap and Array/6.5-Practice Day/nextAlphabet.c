#include<stdio.h>
int main(){
    char lowercase;
    scanf("%c", &lowercase);

    if(lowercase == 'z') printf("a");
    else printf("%c", lowercase+1);

    return 0;
}