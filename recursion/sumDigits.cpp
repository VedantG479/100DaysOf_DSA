#include<iostream>
using namespace std;
int sum(int num){
    //base case
    if(num<=0){
        return 0;
    }
    //recursive call
    return (num%10) + sum(num/10);
}
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Sum of digits is: "<<sum(number);
    return 0;
}