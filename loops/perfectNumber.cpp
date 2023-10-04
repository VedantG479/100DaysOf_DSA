#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int sum = 0;
    for(int i=0; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"Perfect number";
        return 0;
    }
    cout<<"Not a perfect number";
    return 0;
}