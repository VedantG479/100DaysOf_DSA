#include<iostream>
using namespace std;
int peak(int *arr, int start, int end){
    //base case
    if(start == end){
        return start;
    }
    if(start>end){
        return -1;
    }

    //check
    int mid = (start+end)/2;
    if(arr[mid]>=arr[mid-1]){
        return peak(arr,mid,end);
    }
    else{
        return peak(arr,start,mid-1);
    }
}
int main(){
    int arr[] = {1,2,4,5,6,7,8,9,8,5,3,1,0,-2,-6};
    int size = 15;
    int start = 0, end = size - 1;
    cout<<"Peak Index: "<<peak(arr,start,end);
    return 0;
}