#include<iostream>
#include<string>
using namespace std;
char findUppercase(string str, int index){
    //base case:
    if(index>=str.length()){
        return ' ';
    }
    
    //processing: 
    if(isupper(str[index])){
        return str[index];
    }

    //recursive call:
    return findUppercase(str,index+1);
}
int main(){
    string str = "gaidansSAsfnasfASA";
    int size = str.length();
    char uppercase = findUppercase(str,0);
    cout<<uppercase<<" ";
    return 0;
}