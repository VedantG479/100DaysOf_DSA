#include<iostream>
using namespace std;
bool binarySearch(int *arr, int start, int end, int key){
    if(start>end){
        return false;
    }
    int mid = start+(end-start)/2;
    if(arr[mid]==key){
        return true;
    }
    else if(arr[mid]>key){
        end = mid - 1;
    }
    else{
        start = mid + 1;
    }
    mid = start+(end-start)/2;
    return binarySearch(arr,start,end,key);
}
int main(){
    int arr[] = {2,4,5,6,8,10,12,13,14,19};
    int start = 0, end = 9;
    int key = 7;
    cout<<binarySearch(arr,start,end,key);
    return 0;
}