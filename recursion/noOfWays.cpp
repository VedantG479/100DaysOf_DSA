#include<iostream>
using namespace std; 
int countWays(int num){
    if(num<0){
        return 0;
    }
    if(num==0){
        return 1;
    }
    return countWays(num-1) + countWays(num-2);
}
int main(){
    int n;
    cout<<"Enter number of stairs:";
    cin>>n;
    cout<<countWays(n);
    return 0;
}