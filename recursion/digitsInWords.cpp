#include<iostream>
using namespace std;
void sayNum(int number, string words[]){
    if(number==0){
        return;
    }
    int digit = number%10;
    sayNum(number/10,words);    //recursive call;
    cout<<words[digit]<<" ";
}
int main(){
    string words[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    sayNum(num,words);
    return 0;
}