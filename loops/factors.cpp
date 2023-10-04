#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=1; i<sqrt(n); i++){
        if(n%i==0){
            cout<<i<<" "<<n/i<<" ";
        }
    }
    return 0;
}