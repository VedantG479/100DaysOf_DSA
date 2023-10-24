#include<iostream>
using namespace std;
void bubble(int *arr, int index){
    //base case: 
    //size of unsorted array <= 1: i.e. become sorted
    if(index <= 1){
        return;
    }
    
    //sorting one element:
    for(int i=0; i<index-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    //recursive call:
    bubble(arr,index-1);
}
int main(){
    int arr[] = {4,2,5,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble(arr,size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}