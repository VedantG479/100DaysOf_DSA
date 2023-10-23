#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &nums, int start, int end){
    int mid = (start + end)/2;
    int len1 = mid - start + 1, len2 = end - mid;
    int *first = new int[len1];
    int *second = new int[len2];
    int mainArrayIndex = start;
    for(int i=0; i<len1; i++){
        first[i] = nums[mainArrayIndex++];
    }
    mainArrayIndex = mid + 1;
    for(int i=0; i<len2; i++){
        second[i] = nums[mainArrayIndex++];
    }

    int i=0, j=0;
    mainArrayIndex = start;
    while(i<len1 && j<len2){
        if(first[i]<second[j]){
            nums[mainArrayIndex++] = first[i++];
        }
        else{
            nums[mainArrayIndex++] = second[j++];
        }
    }
    while(i<len1){
        nums[mainArrayIndex++] = first[i++];
    }
    while(j<len2){
        nums[mainArrayIndex++] = second[j++];
    }

    delete []first;
    delete []second;
}
void mergeSort(vector<int>& nums, int start, int end){
    if(start>=end)
        return;
    int mid = (start + end)/2;
    mergeSort(nums,start,mid);
    mergeSort(nums,mid+1,end);
    merge(nums,start,end);
}
bool containsDuplicate(vector<int>& nums) {
    int start = 0, end = nums.size()-1;
    mergeSort(nums,start,end);
    for(auto x: nums){
        cout<<x<<" ";
    }
    cout<<endl;

    for(int i=1; i<nums.size(); i++){
        if(nums[i-1]==nums[i]){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(1);
    cout<<containsDuplicate(arr);
    return 0;
}