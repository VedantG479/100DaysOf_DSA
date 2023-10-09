#include<iostream>
using namespace std;
bool isPossible(int arr[], int mid, int numPainters, int boards){
    int painterCount = 1, timeCount = 0;
    for(int i=0; i<boards; i++){
        if(timeCount+arr[i]<=mid){
            timeCount += arr[i];
        }
        else{
            painterCount++;
            if(painterCount>numPainters || arr[i]>mid){
                return false;
            }
            timeCount = arr[i];
        }
    }
    return true;
}
int main(){
    int numPainters = 2, boards = 4, sum = 0;
    int arr[] = {10,20,30,40};
    for(int i=0; i<boards; i++){
        sum += arr[i];
    }
    int start = 0, end = sum, ans = -1;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(isPossible(arr,mid,numPainters,boards)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    cout<<"Minimum of the maximum time distributed to a painter: "<<ans;
    return 0;
}