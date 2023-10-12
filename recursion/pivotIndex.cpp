#include<iostream>
#include<vector>
using namespace std;
int findPeak(vector<int> num, vector<int> left, vector<int> right, int size){
    if(size==0)
}
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(6);
    arr.push_back(5);
    arr.push_back(6);

    int size = arr.size();
    int totalSum = 0;
    vector<int> leftSum;
    vector<int> rightSum;
    for(int i=0; i<size; i++){
        leftSum.push_back(totalSum);
        totalSum+=arr[i];
    }
    for(int i=0; i<size; i++){
        rightSum.push_back(totalSum-leftSum[i]-arr[i]);
    }
    findPeak(arr,leftSum,rightSum,size);
    return 0;
}