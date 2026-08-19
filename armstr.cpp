#include <iostream>
using namespace std;

int main(){
    int n,original,digit,sum=0;
    cout <<"Enter an integer";
    cin >> n;
    original=n;
    while (n!=0){
        digit=n%10;
        sum=sum+digit*digit*digit;
        n=n/10;

    }
    if (sum==original)
    cout <<"Number is armstrong";
    else
    cout <<"Number is not armstrong";
    return 0;
}
