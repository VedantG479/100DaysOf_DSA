#include<iostream>
#include<vector>
using namespace std; 
int find(vector<int> arr, int start, int end){
    //base case
    if(start == end){
        return arr[start];
    }

    int mid = (start + end)/2;
    if(arr[mid]>arr[mid+1]){
        return arr[mid+1];
    }

    if(arr[mid]>arr[0]){
        return find(arr,mid+1,end);
    }
    else{
        return find(arr,start,mid);
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

    cout<<"Peak index is: "<<find(arr,start,end);
    return 0;
}