#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,6,2,5,4,3,7,10};
             //  0 1 2 3 4 5 6 7 8 9
    int size = sizeof(arr)/sizeof(arr[0]);
    int start; 
    cout<<"Enter index after which to reverse: ";
    cin>>start;
    int e = size - 1, s = start + 1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}