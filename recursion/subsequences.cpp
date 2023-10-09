#include<iostream>
#include<vector>
using namespace std;
void solve(string s, vector<string>& ans, string output, int index){
    if(index>=s.length()){
        if(output.size()>0){
            ans.push_back(output);
        }
        return;
    }
    //exclude
    solve(s,ans,output,index+1);

    //include
    char element = s[index];
    output.push_back(element);
    solve(s,ans,output,index+1);
}
int main(){
    string s = "abc";
    vector<string> ans;
    string output;
    int index = 0;
    solve(s,ans,output,index);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}