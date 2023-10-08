#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,9,1,2,3};
    int size = 5;
    int start = 0, end = size-1;
    int mid = start + (end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end-start)/2;
    }
    cout<<"Pivot element is: "<<arr[start];
    return 0;
}