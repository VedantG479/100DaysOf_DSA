#include<iostream>
#include<vector>
using namespace std;
//A1: if same string change, increase size of string 
//    start iteration from right and shifting...
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    vector<char> ans;
    for(int i=0; i<str.length(); i++){
        if(str[i] == ' '){
            ans.push_back('@');
            ans.push_back('4');
            ans.push_back('0');
        }
        else{
            ans.push_back(str[i]);
        }
    }
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i];
    }
    return 0;
}