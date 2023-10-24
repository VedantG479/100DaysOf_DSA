#include<iostream>
using namespace std;
void selection(int *arr, int size, int index){
    //base case: 
    //when our index reaches last index of array:
    if(index>=size-1){
        return;
    }

    //sorting:
    int minIndex = index;
    for(int i=index+1; i<size; i++){
        if(arr[i]<arr[minIndex]){
            minIndex = i;
        }
    }
    swap(arr[index],arr[minIndex]);

    //recursive call:
    selection(arr,size,index+1);
}
int main(){
    int arr[] = {4,2,5,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    selection(arr,size,0);

    for(int x: arr){
        cout<<x<<" ";
    }

    return 0;
}