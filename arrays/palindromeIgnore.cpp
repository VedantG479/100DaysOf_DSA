#include<iostream>
using namespace std;
bool check(char a){
    if((a>='A' && a<='Z') || (a>='a' && a<='z') || (a>='0' && a<='9')){
        return true;
    }
    return false;
}
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    int start = 0, end = str.length()-1;
    while(start<=end){
        if(!check(str[start])){
            start++;
            continue;
        }
        if(!check(str[end])){
            end--;
            continue;
        }

        if(str[start]==str[end] || str[start]+'a'-'A' == str[end]){
            start++; end--;
        }
        else{
            cout<<"Not a Palindrome ";
            return 0;
        }
    }
    cout<<"Palindrome";
    return 0;
}