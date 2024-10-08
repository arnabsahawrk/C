#include<stdio.h>

int main(){
    unsigned short int marks;
    scanf("%hu", &marks);

    if(marks>=32 && marks <=100){
        printf("You've passed.\n");

        if(marks>=80){
            printf("You got A+\n");

            if(marks>=90) printf("Excellent! You got Scholarship.");
            
        }else if(marks >= 70) printf("You got A");
        else if(marks >= 60) printf("You got A-");
        else if(marks >= 50) printf("You got B");
        else if(marks >= 40) printf("You got C");
        else printf("You got D");
    }else if(marks >= 0 && marks <=32){
        printf("You've failed.\nYou got F");
    }else{
        printf("Invalid Marks");
    }
}