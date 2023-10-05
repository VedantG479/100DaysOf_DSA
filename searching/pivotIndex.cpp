#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {2,1,-1};
    vector<int> leftSum(3);
    vector<int> rightSum(3);
    int totalSum = arr[0];
    leftSum[0] = 0;
    for(int i=1; i<3; i++){
        totalSum+=arr[i];
        leftSum[i] = totalSum-arr[i];
    }
    for(int i=0; i<3; i++){
        rightSum[i] = totalSum-arr[i]-leftSum[i];
    }
    for(int i=0; i<3; i++){
        if(leftSum[i]==rightSum[i]){
            cout<<"Pivot Element is: "<<arr[i];
        }
    }
    return 0;
}