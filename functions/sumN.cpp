#include<iostream>
using namespace std;
int sumN(int &n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int number;
    cout<<"Enter a number";
    cin>>number;
    cout<<sumN(number);
    return 0;
}