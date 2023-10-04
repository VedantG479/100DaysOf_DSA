#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<<"Enter the principal, rate and time";
    cin>>p>>r>>t;
    cout<<"The simple interest is : "<< (p*r*t)/100;
    return 0;
}