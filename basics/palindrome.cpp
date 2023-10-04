#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:";
    cin>>s;
    for(int i=0; i<s.length()/2 - 1; i++){
        if(s[i]!=s[s.length()-i-1]){
            cout<<"Not a palindrome";
            return 0;
        }
    }
    cout<<"a palindrome";
    return 0;
}