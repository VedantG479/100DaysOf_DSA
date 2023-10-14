#include<iostream>
#include<vector>
using namespace std;
int findPivot(vector<int> arr, int start, int end){
    if(start==end){
        return start;
    }

    int mid = (start+end)/2;
    if(arr[mid]>arr[mid+1]){
        return (mid + 1);
    }

    if(arr[mid]>arr[0]){
        return findPivot(arr,mid+1,end);
    }
    else{
        return findPivot(arr,start,mid);
    }
}
int search(vector<int> arr, int target, int start, int end, int mid){
    if(start>end){
        return -1;
    }
}
int main(){
    vector<int> arr;
    arr.push_back(7);
    arr.push_back(9);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);

    int start = 0, end = arr.size() - 1;
    int pivotIndex = findPivot(arr,start,end);

    int element;
    cout<<"enter element to find: ";
    cin>>element;
    if(element>=arr[0]){
        int mid = (start + pivotIndex)/2;
        cout<<search(arr,element,start,pivotIndex,mid);
    }
    else{
        int mid = (start+pivotIndex)/2;
        cout<<search(arr,element,pivotIndex,end,mid);
    }
    return 0;
}