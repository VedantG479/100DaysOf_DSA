#include<iostream>
using namespace std;
bool isPossible(int arr[], int mid, int days, int chapters){
    int dayCount = 1, timeCount = 0;
    for(int i=0; i<chapters; i++){
        if(timeCount + arr[i] <= mid){
            timeCount += arr[i];
        }
        else{
            dayCount++;
            if(dayCount>days || arr[i]>mid){
                return false;
            }
            timeCount = arr[i];
        }
    }
    return true;
}
int main(){
    int arr[] = {30,20,10,40,5,45};
    int chapters = 6, days = 3;
    int sum = 0;
    for(int i=0; i<chapters; i++){
        sum += arr[i];
    }
    int start = 0, end = sum, ans = -1;
    int mid = start + (end - start)/2;
    while(start<=end){
        if(isPossible(arr,mid,days,chapters)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    cout<<"minimum number of max chapters per day: "<<ans;
    return 0;
}