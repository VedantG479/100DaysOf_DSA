#include<iostream>
using namespace std;
int main(){
    int n1, n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    int lcm = -1, i=max(n1,n2);
    while(lcm==-1){
        if(i%n1==0 && i%n2==0){
            lcm = i;
        }
        i++;
    }
    cout<<"LCM is: "<<lcm;
    return 0;
}