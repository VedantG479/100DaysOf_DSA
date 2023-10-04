#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    int len = str.length();
    for(int i=0; i<(len/2); i++){
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
    cout<<"Reversed String: "<<str;
    return 0;
}