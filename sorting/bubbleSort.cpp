#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,6,1,3,7,9,2,3,5,8,8,2,3,4};
    int size = 15;
    for(int i=1; i<size; i++){
        bool swapped = false;
        for(int j=0; j<size-i; j++){
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