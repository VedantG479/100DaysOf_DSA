#include<iostream>
using namespace std;
bool search(int arr[], int start, int end, int target){
    if(start>end)
        return false;
    int mid = (start + end)/2;
    if(arr[mid]==target){
        return true;
    }
    else if(arr[mid]>target){
        return search(arr,start,mid-1,target);
    }
    else{
        return search(arr,mid+1,end,target);
    }
}
int main(){
    int arr[] = {1,2,5,8,9,10,12,15,17,29};
    int size = 10;
    int start = 0, end = size - 1;
    int element;
    cout<<"Enter element to find: ";
    cin>>element;
    cout<<search(arr,start,end,element);
    return 0;
}