#include<iostream>
using namespace std;
int main(){
    char s[25];
    cout<<"Enter your name: ";
    cin.getline(s,25);
    cout<<"Hello "<<s;
    return 0;
}