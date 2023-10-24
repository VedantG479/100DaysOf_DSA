#include<iostream>
using namespace std;
void insertion(int *arr, int size, int index = 1){
    //base case: 
    //after we have inserted the last element at right position:
    if(index>=size){
        return;
    }

    //sorting:
    int current = arr[index];
    int j = index - 1;
    while(arr[j]>current){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = current;

    //recursive call:
    insertion(arr,size,index + 1);
}
int main(){
    int arr[] = {4,1,2,5,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    insertion(arr,size);

    for(int x: arr){
        cout<<x<<" ";
    }

    return 0;
}