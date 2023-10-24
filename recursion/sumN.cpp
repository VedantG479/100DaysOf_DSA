#include<iostream>
using namespace std;
int sum(int num){
    //base case:
    if(num==0){
        return 0;
    }

    return num + sum(num-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}