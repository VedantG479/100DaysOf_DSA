#include<iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    string sub;
    cout<<"Enter substring: ";
    getline(cin,sub);
    int windowLength = sub.length();
    for(int i=0; i<s.length()-windowLength-1; i++){
        string subString = s.substr(i,windowLength);
        if()
    }
}