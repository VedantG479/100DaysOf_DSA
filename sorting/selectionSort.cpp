#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,4,2,6,2,6,7,3,8,9,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size-1; i++){
        int minIndex = i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}