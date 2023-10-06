#include<iostream>
using namespace std;
int countWay(int n){
    if(n<0)
        return 0;
    if(n==0)
        return 1;
    return countWay(n-1) + countWay(n-2);
}
int main(){
    int num;
    cout<<"Enter number of stairs: ";
    cin>>num;
    cout<<"Number of ways to reach: "<<countWay(num);
    return 0;
}