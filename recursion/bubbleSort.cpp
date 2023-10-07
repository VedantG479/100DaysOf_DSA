#include<iostream>
using namespace std;
void sortArray(int *arr, int size){
    if(size==1){
        return;
    }
    for(int i=0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortArray(arr,size-1);
}
int main(){
    int arr[] = {2,3,6,2,7,99,2,1,4,8,2,0,3,2,57};
    sortArray(arr,15);
    for(int i=0; i<15; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}