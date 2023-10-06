#include<iostream>
using namespace std;
int exponent(int base, int power){
    if(power==0){
        return 1;
    }
    return base*exponent(base,power-1);
}
int main(){
    int num,pow;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter power: ";
    cin>>pow;
    cout<<"Exponent is: "<<exponent(num,pow);
    return 0;
}