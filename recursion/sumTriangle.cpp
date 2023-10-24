#include<iostream>
#include<vector>
using namespace std;
void triangleSum(vector<int> arr, int size){
    //base case:
    if(size<=0){
        return;
    }

    //finding sum:
    vector<int> sum;
    for(int i=0; i<size-1; i++){
        sum.push_back(arr[i]+arr[i+1]);
    }

    //recursive call:
    triangleSum(sum,size-1);

    //printing array:
    for(auto x: sum){
        cout<<x<<" ";
    }
    cout<<endl;
    
}
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    int size = 5;
    triangleSum(arr,size);

    for(auto x: arr){
        cout<<x<<" ";
    }
    return 0;
}