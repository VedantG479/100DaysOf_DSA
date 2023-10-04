#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int rev = 0, temp = n;
    while(n>0){
        rev *= 10;
        rev += n%10;
        n /= 10;
    }
    if(rev == temp)
        cout<<"Palindrome";
    else
        cout<<"Not a Palindrome";
    return 0;
}