#include<iostream>
using namespace std;
int max(int a, int b, int c){
    if(a>=b && a>=c)
        return a;
    else if(b>=a && b>=c)
        return b;
    return c;
}
int min(int a, int b, int c){
    if(a<=b && a<=c)
        return a;
    else if(b<=a && b<=c)
        return b;
    return c;
}
int main(){
    int n1, n2, n3;
    cout<<"Enter Three Numbers: ";
    cin>>n1>>n2>>n3;
    cout<<"Maximum Number is: "<<max(n1,n2,n3);
    cout<<"Minimum Number is: "<<min(n1,n2,n3);
    return 0;
}