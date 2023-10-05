#include<iostream>
#include<math.h>
using namespace std;
void printPrimes(int &lower, int &higher){
    for(int i=lower+1; i<higher; i++){
        int count = 0;
        for(int j=2; j<sqrt(i); j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==0)
            cout<<i<<" is prime";
    }
}
int main(){
    int l, h;
    cout<<"Enter Lower and Higher Range: ";
    cin>>l>>h;
    printPrimes(l,h);
    return 0;
}