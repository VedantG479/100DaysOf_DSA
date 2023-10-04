#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    int temp = n, armStrng = 0;
    while(n>0){
        int digit = n%10;
        armStrng += pow(digit,3);
        n/=10;
    }
    if(armStrng==temp)
        cout<<"Armstrong number";
    else
        cout<<"Not an amstrong number";
    return 0;
}