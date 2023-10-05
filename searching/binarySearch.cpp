#include<iostream>
using namespace std;
int main(){
    int arr[] = {-3,0,1,2,4,5,6,7,8,12,15,60};
    int toFind;
    cout<<"Enter element to find: ";
    cin>>toFind;
    int size = sizeof(arr)/sizeof(arr[0]);
    int start = 0, end = size-1;
    int mid = (start + (end-start)/2);
    while(start<=end){
        if(toFind<arr[mid])
            end = mid - 1;
        else if(toFind>arr[mid])
            start = mid + 1;
        else{
            cout<<"Element Found at : "<<mid;
            return 0;
        }
        mid = (start + (end-start)/2);
    }
    return 0;
}