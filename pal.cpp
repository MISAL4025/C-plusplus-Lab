#include <iostream>
int main(){
    int n,original,reverse=0,digit;

 std::cout<<"Enter an integer";
 std::cin>> n;
 original=n;
 while(n!=0){
    digit=n%10;
    reverse=reverse*10+digit;
    n=n/10;

 }
 if(original==reverse)
 
    std::cout<<"the number is PALINDROME";
    else
    std::cout<<"the number is not palindrome";
    return 0;
     

 }
