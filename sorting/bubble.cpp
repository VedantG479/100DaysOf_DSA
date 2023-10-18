#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,2,5,1,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=1; i<size; i++){
        bool swapped = false;
        for(int j=0; j<size-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped==false){
            break;
        }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}