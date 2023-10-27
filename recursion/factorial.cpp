#include<iostream>
using namespace std;
int factorial(int n){
    //base case:
    if(n==0 || n==1){
        return 1;
    }

    return n*factorial(n-1);
}
int main(){
    int number;
    cin>>number;
    cout<<factorial(number);
    return 0;
}