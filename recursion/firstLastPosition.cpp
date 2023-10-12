#include<iostream>
using namespace std;
int index(int *arr, int start, int end, int target, bool ifFirst){
    if(start>end){
        return -1;
    }
    int mid = (start + end)/2;
    if(arr[mid]==target){
        if(ifFirst){
            if(index(arr,start,mid-1,target,1)==-1)
                return mid;
            else{
                return index(arr,start,mid-1,target,1);
            }
        }    
        else{
            if(index(arr,mid+1,end,target,0)==-1)
                return mid;
            else{
                return index(arr,mid+1,end,target,0);
            }
        }
    }
    else if(arr[mid]>target){
        if(ifFirst)
            return index(arr,start,mid-1,target,1);
        else 
            return index(arr,start,mid-1,target,0);
    }
    else{
        if(ifFirst)
            return index(arr,mid+1,end,target,1);
        else
            return index(arr,mid+1,end,target,0);
    }
}
int main(){
    int arr[] = {1,2,4,4,4,6,6,7,9,9,9,10,13,16,16,17,19,19,19,19};
    int size = 20;
    int start = 0, end = size - 1;
    int element;
    cout<<"Enter element to search: ";
    cin>>element;
    cout<<"First Index: "<<index(arr,start,end,element,1);
    cout<<"Last Index: "<<index(arr,start,end,element,0);
    return 0;
}