#include<iostream>
using namespace std;
int maxArray(int *arr, int size){
    //base case: 
    if(size==1){
        return arr[0];
    }

    return max(arr[0],maxArray(arr+1,size-1));
}
int minArray(int arr[], int size){
    //base case:
    if(size==1){
        return arr[0];
    }

    return min(arr[0],minArray(arr+1,size-1));
}
int main(){
    int arr[] = {1, 4, 3, -5, -4, 8, 6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = maxArray(arr,size);
    int min = minArray(arr,size);
    cout<<"Maximum of array is: "<<max<<endl;
    cout<<"Minimum of array is: "<<min<<endl;
    return 0;
}