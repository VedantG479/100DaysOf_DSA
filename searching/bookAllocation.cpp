#include<iostream>
using namespace std;
bool isPossible(int arr[], int numStudent, int mid, int size){
    int studentCount = 1, pageCount = 0;
    for(int i=0; i<size; i++){
        if(pageCount + arr[i] <= mid){
            pageCount += arr[i];
        }
        else{
            studentCount++;
            if(studentCount>numStudent || arr[i] > mid){
                return false;
            }
            pageCount = arr[i];
        }
    }
    return true;
}
int main(){
    int arr[] = {25,46,28,49,24};
    int numStudent = 4, sum = 0, ans = -1;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++){
        sum += arr[i];
    }
    int start = 0, end = sum;
    int mid = start + (end-start)/2;
    while(start<=end){
        if(isPossible(arr,numStudent, mid, size)){
            ans = mid;
            end = mid -1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    cout<<"Number of minimum of maximum pages: "<<ans;
    return 0;
}