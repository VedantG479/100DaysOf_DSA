#include<iostream>
#include<vector>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin,str);
    vector<int> count(26);
    for(int i=0; i<str.length(); i++){
        if(str[i]>='a'&&str[i]<='z')
            count[str[i]-'a']++;
        else if(str[i]>='A'&&str[i]<='Z')
            count[str[i]-'A']++;
    }
    int maxIndex = 0;
    for(int i=1; i<count.size(); i++){
        if(count[i]>count[maxIndex]){
            maxIndex = i;
        }
    }
    cout<<"Character with maximum occurence: "<<char(maxIndex+'a');
    return 0;
}