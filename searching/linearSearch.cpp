#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,4,5,2,4,6,7,2,0};
    int toFind;
    cout<<"Enter element to find: ";
    cin>>toFind;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++){
        if(arr[i]==toFind){
            cout<<"Element found at: "<<i;
        }
    } 
    return 0;
}