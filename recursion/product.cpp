#include<iostream>
using namespace std;
int product(int num1, int num2){
    if(num2==0){
        return 0;
    }
    return num1+product(num1,num2-1);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<product(a,b);
    return 0;
}