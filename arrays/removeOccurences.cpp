#include<iostream>
using namespace std;
int main(){
    string s ,sub;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<"Enter substring: ";
    getline(cin,sub);
    while(!(s.find(sub)==-1)){
        s.erase(s.find(sub),sub.length());
    }
    cout<<s;
    return 0;
}