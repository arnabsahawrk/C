#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int x){

    if(x<0){
       return false;
    }else if(x==0) return true;

    long long int temp =x;
    long long int rev=0;

    while (temp!=0)
    {
       rev = rev*10 + temp%10;
       temp/=10;
    }

    if(rev==x) return true;
    else return false;
}

int main(){
    int x;
    scanf("%d", &x);

    bool palindrome = isPalindrome(x);
    if(palindrome) printf("Yes");
    else printf("No");


    return 0;
}