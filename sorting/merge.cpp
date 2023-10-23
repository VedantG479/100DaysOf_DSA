#include<iostream>
using namespace std;
void merge(int* arr, int start, int end){
    int mid = (start + end)/2;
    int len1 = mid - start + 1, len2 = end - mid;
    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrayIndex = start;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }

    //mainArrayIndex = mid + 1;

    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = start;
    int index1 = 0, index2 = 0;
    while(index1<len1 && index2<len2){
        if(first[index1]<=second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while(index1<len1){
        arr[mainArrayIndex++] = first[index1++];
    }
    while(index2<len2){
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;
}
void mergeSort(int *arr, int start, int end){
    if(start>=end){
        return;
    }
    int mid = (start + end)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,end);
}
int main(){
    int arr[] = {3,5,7,8,2,3,5,7,8,10};
    int size = 10;
    int start = 0, end = size - 1;
    mergeSort(arr,start,end);

    for(int x: arr){
        cout<<x<<" ";
    }
    return 0;
}