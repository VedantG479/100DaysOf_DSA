#include<iostream>
using namespace std;
int main(){
    char s;
    cout<<"Enter a character ";
    cin>>s;
    if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u'){
        cout<<"Vowel";
        return 0;
    }
    cout<<"Consonant";
    return 0;
}