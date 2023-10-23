#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,5,0,3,4,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    //APPROACH: BUBBLE SORT O(N^2)
    for(int i=0; i<size-1; i++){
        bool swapped = false;
        for(int j=0; j<size-1; j++){
            if(arr[j]==0){
                swap(arr[j+1],arr[j]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }

    for(int x: arr){
        cout<<x<<" ";
    }

    //APPROACH: O(N)
    int count = 0;
    vector<int> ans;
    for(int i=0; i<size; i++){
        if(arr[i]==0)
            count++;
        else    
            ans.push_back(arr[i]);
    }
    for(int i=0; i<count; i++){
        ans.push_back(0);
    }
    
    for(auto x: ans){
        cout<<x<<" ";
    }
    return 0;
}