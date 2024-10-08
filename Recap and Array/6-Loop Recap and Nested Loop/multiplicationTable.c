#include<stdio.h>

int main(){
     // int num;
    // scanf("%d", &num);

    // for(int i=1; i<=10; i++){
    //     printf("%d * %2d = %2d\n", num, i, num*i);
    // }


    for(int i=1; i<=10; i++){
        for(int j=1; j<=10; j++){
            printf("%3d ", i*j);
        }
        printf("\n");
    }

   return 0;
}