#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);

    int array[5];

    for(int i=0; i<N; i++){
        scanf("%d", &array[i]);
    }

    int min = array[0], max= array[0];

    for(int j=0; j<N; j++){
        if(min>array[j]) min = array[j];

        if(max<array[j]) max = array[j];
    }
    printf("Minimum Number: %d, Maximum Number: %d", min, max);
}