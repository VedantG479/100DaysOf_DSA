#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,1,2,5,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=1; i<size; i++){
        int current = arr[i];
        int j = i-1;
        while(current<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    for(int x: arr){
        cout<<x<<" ";
    }

    return 0;
}