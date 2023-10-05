#include<iostream>
using namespace std;
//A1: iterate twice
int findUnique(int *arr, int size){
    int unique = 0;
    for(int i=0; i<size; i++){
        unique = unique ^ arr[i];
    }
    return unique;
}
int main(){
    int arr[] = {1,2,3,4,5,4,6,5,2,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<findUnique(arr,size);
    return 0;
}