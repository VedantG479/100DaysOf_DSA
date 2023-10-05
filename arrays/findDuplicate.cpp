#include<iostream>
using namespace std;
//A1: iterate twice
int findDuplicate(int *arr, int size){
    int duplicate = 0;
    for(int i=0; i<size; i++){
        duplicate = duplicate ^ arr[i];
    }
    for(int i=1; i<size; i++){
        duplicate = duplicate ^ i;
    }
    return duplicate;
}
int main(){
    int arr[] = {1,2,3,4,2,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<findDuplicate(arr,size);
    return 0;
}