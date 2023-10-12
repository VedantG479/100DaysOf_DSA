#include<iostream>
using namespace std;
bool checkSort(int arr[], int size){
    if(size==1 || size==0){
        return true;
    }
    if(arr[0]>arr[1])
        return false;
    else {
        bool remainingSorted = checkSort(arr+1,size-1);
        return remainingSorted;
    }
}
int main(){
    int arr[] = {1,2,4,7,9,10,19};
    int size = 7;
    cout<<checkSort(arr,size);
    return 0;
}