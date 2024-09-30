#include<stdio.h>
#include<stdbool.h>

int main(){
    int result = !((5>8) && (8 <7) || (8 > 9));

    printf("%d", result);
}