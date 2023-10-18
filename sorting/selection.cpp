#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,5,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<size-1; i++){
        int minIndex = i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }

    for(int x: arr){
        cout<<x<<" ";
    }

    return 0;
}