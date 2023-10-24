#include<iostream>
using namespace std;
bool check(int n, int count){
    if(count < 2){
        return true;
    }
    if(n%count==0){
        return false;
    }
    else{
        return check(n,count-1);
    }
}
int main(){
    int n;
    cin>>n;
    if(check(n,n-1))
        cout<<"is Prime";
    else
        cout<<"is not Prime";
    return 0;
}