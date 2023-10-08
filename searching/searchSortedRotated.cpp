#include<iostream>
using namespace std;
int main(){
    int arr[] = {7,9,1,2,3};
    int size = 5;
    //finding pivot: 
    int start = 0, end = size -1;
    int mid = start + (end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start+(end-start)/2;
    }

    //finding element: 
    int element;
    cout<<"Enter element to find: ";
    cin>>element;

    if(element>=arr[0]){
        end = start - 1;
        start = 0;
    }
    else{
        end = size - 1;
    }

    mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid]==element){
            cout<<"Element present at: "<<mid;
            return 0;
        }
        else if(arr[mid]>element){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    cout<<"ELEMENT NOT FOUND";
    return 0;
}