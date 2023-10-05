#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,4,2,1,0};
    int size = 10;
    int i = 0, j = size - 1; 
    int mid = (i + (j-i)/2);
    while(i<j){
        if(arr[mid]<arr[mid+1]){
            i = mid+1;
        }
        else{
            j = mid;
        }
        mid = (i + (j-i)/2);
    }
    cout<<"Peak Value: "<<arr[mid];
    return 0;
}