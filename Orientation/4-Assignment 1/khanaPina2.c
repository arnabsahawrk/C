#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   short int M;
   scanf("%hd", &M);

   M%3 == 0 ? printf("Yes") : printf("No"); 
    return 0;
}
