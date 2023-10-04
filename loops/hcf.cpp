#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    int mini = min(n2,n1);
    int hcf = 1;
    for(int i=1; i<=mini; i++){
        if(n2%i==0 && n1%i==0){
            hcf = i;
        }
    }
    cout<<"HCF is: "<<hcf;
    return 0;
}