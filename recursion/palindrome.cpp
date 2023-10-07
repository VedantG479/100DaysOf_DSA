#include<iostream>
using namespace std;
bool checkPalindrome(string s, int i, int j){
    if(i>j){
        return true;
    }
    if(s[i]!=s[j]){
        return false;
    }
    else{
        return checkPalindrome(s,i+1,j-1);
    }
}
int main(){
    string str = "hello";
    int i=0, j=str.length()-1;
    cout<<checkPalindrome(str,i,j);
    return 0;
}