#include<iostream>
#include<vector>
using namespace std;
//A1: iterate twice
void printDuplicates(int *arr, int size){
    vector<int> count(size+1);
    for(int i=0; i<size; i++){
        count[arr[i]]++;
    }
    for(int i=0; i<size; i++){
        if(count[i]==2)
            cout<<"Duplicate elemet: "<<i;
    }
}
int main(){
    int arr[] = {1,3,5,2,6,6,3,1,9,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    printDuplicates(arr,size);
    return 0;
}