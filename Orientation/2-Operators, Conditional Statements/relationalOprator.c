#include<stdio.h>
#include<stdbool.h>

int main(){
    int a=69, b=96;

    bool isEqual = a == b;
    bool isNotEqual = a!=b;
    bool isGrater = a > b;
    bool isGraterOrEqual = a>=b;
    bool isLess = a<b;
    bool isLessOrEqual = a<=b;

    printf("%d, %d, %d, %d, %d, %d", isEqual, isNotEqual, isGrater, isGraterOrEqual, isLess, isLessOrEqual);
}