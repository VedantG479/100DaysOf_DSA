#include<iostream>
using namespace std;
void rev(string &subj, int i){
    if(i>subj.length()-i-1){
        return;
    }
    swap(subj[i],subj[subj.length()-i-1]);
    rev(subj,i+1);
}
int main(){
    string s = "hello hi how are you?";
    rev(s,0);
    cout<<s;
    return 0;
}