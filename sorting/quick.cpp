#include<iostream>
using namespace std;
int partition(int *arr, int start, int end){
    int pivotElement = arr[start];
    int count = 0;
    for(int i=start+1; i<=end; i++){
        if(arr[i]<=pivotElement)
            count++;
    }
    int pivotIndex = start + count;
    swap(arr[start],arr[pivotIndex]);

    int i=start, j = end;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivotElement){
            i++;
        }
        while(arr[j]>pivotElement){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int *arr, int start, int end){
    if(start>=end){
        return;
    }
    int partitionIndex = partition(arr,start,end);
    quickSort(arr,start,partitionIndex-1);
    quickSort(arr,partitionIndex+1,end);
}
int main(){
    int arr[] = {3,5,7,8,2,3,5,7,8,10};
    int size = 10;
    int start = 0, end = size - 1;
    quickSort(arr,start,end);

    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}