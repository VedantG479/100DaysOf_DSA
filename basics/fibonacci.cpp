#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    int a=0, b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n-2;i++){
        int sum = a+b;
        a = b;
        b = sum;
        cout<<b<<" ";
    }
    return 0;
}