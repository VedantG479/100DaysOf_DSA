#include<iostream>
using namespace std;
void print(int num){
    //base case:
    if(num<=0){
        return;
    }

    //recursive call:
    print(num-1);

    //process:
    cout<<num<<" ";
}
int main(){
    int number;
    cout<<"enter a number: ";
    cin>>number;
    print(number);
    return 0;
}