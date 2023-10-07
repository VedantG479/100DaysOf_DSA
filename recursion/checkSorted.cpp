#include<iostream>
using namespace std;
bool checkSorting(int *arr, int size){
    if(size==0 || size==1)
        return true;
    if(arr[0]>arr[1])
        return false;
    else{
        bool remainingSorted = checkSorting(arr+1,size-1);
        return remainingSorted;
    }
}
int main(){
    int arr[] = {1,2,4,6,10,8,9};
    cout<<checkSorting(arr,7);
    return 0;
}