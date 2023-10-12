#include<iostream>
using namespace std;
int fib(int num){
    if(num==0 || num==1){
        return num;
    }
    return fib(num-1)+fib(num-2);
}
int main(){
    int n; 
    cout<<"Enter a number: ";
    cin>>n;
    cout<<n<<"th term of fibonacci is: "<<fib(n);
    return 0;
}