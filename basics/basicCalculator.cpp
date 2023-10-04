#include<iostream>
using namespace std;
int main(){
    int a,b;
    char op;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter operator + - * or /";
    cin>>op; 
    switch(op){
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
        default:
            cout<<"Enter valid input";
            break;
    }
    return 0;
}