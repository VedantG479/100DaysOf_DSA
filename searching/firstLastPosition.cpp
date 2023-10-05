#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,5,6,6,6,7,9,13,13};
    int size = sizeof(arr)/sizeof(arr[0]);
    int element;
    cout<<"Enter element to find: ";
    cin>>element;
    int i = 0, j = size-1; 
    int mid = (i + (j-i)/2);
    int index = -1;
    while(i<=j){
        if(element>arr[mid]){
            i = mid+1;
        }
        else if(element<arr[mid]){
            j = mid-1;
        }
        else{
            index = mid;
            j = mid-1;
        }
        mid = (i + (j-i)/2);
    }
    cout<<"First Occurence at: "<<index;

    i = 0, j = size-1; 
    mid = (i + (j-i)/2);
    while(i<=j){
        if(element>arr[mid]){
            i = mid+1;
        }
        else if(element<arr[mid]){
            j = mid-1;
        }
        else{
            index = mid;
            i = mid+1;
        }
        mid = (i + (j-i)/2);
    }
    cout<<"Last Occurence at: "<<index;
}