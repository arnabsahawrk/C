#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    short int N;
    scanf("%hd", &N);

    short int iterator=1;
    while (iterator<=N)
    {
       if((iterator%3==0) ||(iterator%5==0)) printf("%hd Yes\n", iterator);
       else printf("%hd No\n", iterator);

       iterator++;
    }
      
    return 0;
}
