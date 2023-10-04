#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    int max = n;
    int compare;
    cout<<"Enter another number: ";
    cin>>compare;
    while(compare!=-1){
        if(max<compare){
            max = compare;
        }
        cout<<"Enter another number:";
        cin>>compare;
    }
    cout<<"Maximum number is: "<<max;
    return 0;
}