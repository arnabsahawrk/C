#include<stdio.h>
int main(){

    for(int i=0; i<5; i++){
        for (int j=0; j<10; j++){
            printf("%d ", j+1);
        }
        printf("\n");
    }

    int count = 0;

    for(int i=0; i<5; i++){
        for(int j=0; j<10; j++){
            for(int k=0; k<10; k++){
                count++;
            }
        }
    }

    printf("%d", count); //nested loop execution time n^n;


    return 0;
}