#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int sum=0, product=1;
    while(n>0){
        int digit = n%10;
        sum+=digit;
        product*=digit;
        n/=10;
    }
    cout<<sum-product;
    return 0; 
}