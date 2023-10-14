#include<iostream>
using namespace std;
int expo(int base, int power){
    //base case
    if(power==1){
        return base;
    }
    //recursive call
    return base*expo(base,power-1);
}
int main(){
    int base, power;
    cout<<"Enter base and power: ";
    cin>>base>>power;
    cout<<base<<"^"<<power<<"="<<expo(base,power);
    return 0;
}