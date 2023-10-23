#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>& nums, int start, int end){
    int pivotElement = nums[start], count = 0;
    for(int i=start+1; i<=end; i++){
    if(nums[i]<=pivotElement)
        count++;
    }

    int pivotIndex = start + count;
    swap(nums[pivotIndex],nums[start]);

    int i=start, j=end;
    while(i<pivotIndex && j>pivotIndex){
    while(nums[i]<=pivotElement){
        i++;
    }
    while(nums[j]>pivotElement){
        j--;
    }
    if(i<pivotIndex && j>pivotIndex){
        swap(nums[i++],nums[j--]);
    }
    }
    return pivotIndex;
}
void quickSort(vector<int> &nums, int start, int end){
    if(start>=end){
    return;
    }
    int partitionIndex = partition(nums,start,end);
    quickSort(nums,start,partitionIndex-1);
    quickSort(nums,partitionIndex+1,end);
}
int majorityElement(vector<int>& nums) {
    int start = 0, end = nums.size()-1;
    quickSort(nums,start,end);
    for(auto x: nums){
        cout<<x<<" ";
    }
    cout<<endl;
    int toCheck = nums[0];
    int count = 0;
    for(int i=start; i<=end; i++){
        if(nums[i]==toCheck){
        count++;
        }
        else{
        count = 1; 
        toCheck = nums[i];
        }
        if(count>(nums.size()/2)){
        return nums[i];
        }
    }
    return nums[0];
}
int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    cout<<majorityElement(arr);
    return 0;
}