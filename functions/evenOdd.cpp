#include<iostream>
using namespace std;
void check(int &number){
    if(number%2==0){
        cout<<"Even number";
        return;
    }
    cout<<"Odd number";
    return;
}
int main(){
    int num; 
    cout<<"Enter a number: ";
    cin>>num;
    check(num);
    return 0; 
}
