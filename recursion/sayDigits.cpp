#include<iostream>
using namespace std;
string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
void say(int number){
    if(number==0)
        return;
    int digit = number%10;
    number/=10;
    say(number);
    cout<<arr[digit]<<" ";
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    say(num);
    return 0;
}