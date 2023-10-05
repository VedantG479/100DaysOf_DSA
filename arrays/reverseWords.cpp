#include<iostream>
#include<string>
using namespace std;
void reverseWord(string &st, int s, int e){
    while(s<=e){
        swap(st[s++],st[e--]);
    }
}
int main(){
    string str;
    cout<<"enter a string: ";
    getline(cin,str);
    int size = str.length();
    int start = 0, end = 0;
    while(end<=size){
        if((str[end]=='\0') || (str[end]==' ')){
            reverseWord(str,start,end-1);
            start = end+1;
        }
        end++;
    }
    cout<<"Reversed String: "<<str;
    return 0;
}