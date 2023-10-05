#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,4,2,6,2,6,7,3,8,9,0};
    int size = sizeof(arr)/sizeof(arr[0]);
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
    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}