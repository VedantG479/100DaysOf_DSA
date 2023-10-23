#include<iostream>
#include<vector>
using namespace std;
int findPeak(int index, int leftSum, int totalSum, vector<int> nums){
    if(index>=nums.size()){
        return -1;
    }

    if(leftSum == totalSum - leftSum - nums[index]){
        return index;
    }

    return findPeak(index+1, leftSum + nums[index], totalSum, nums);
}
int main(){
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(-1);

    int size = arr.size();
    int totalSum = 0;
    for(int i=0; i<size; i++){
        totalSum+=arr[i];
    }
    cout<<"Peak Index is: "<<findPeak(0,0,totalSum,arr);
    return 0;
}