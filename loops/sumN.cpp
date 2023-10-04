#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    int n; 
    cout<<"Enter a number: ";
    cin>>n;
    while(n!=-1){
        sum+=n;
        cout<<"Enter Number: ";
        cin>>n;
    }
    cout<<"Sum of number is: "<<sum;
    return 0;
}