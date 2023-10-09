#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,4,2,6,2,6,7,3,8,9,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    /*for(int i=1; i<size; i++){
        int comp = arr[i];
        int j = i-1;
        for(;j>=0;j--){
            if(arr[j]>comp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = comp;
    }*/
    for(int i=1; i<size; i++){
        int comp = arr[i];
        int j = i - 1;
        while(comp<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = comp;
    }
    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}