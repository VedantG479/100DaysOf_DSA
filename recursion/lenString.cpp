#include<iostream>
using namespace std;
int findLen(string str, int count = 0){
    if(str[count]=='\0'){
        return count;
    }
    return findLen(str,count+1);
}
int main(){
    string str = "geeks";
    cout<<findLen(str);
    return 0;
}
