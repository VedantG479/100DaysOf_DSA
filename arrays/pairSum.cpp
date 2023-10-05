#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > pairs(int *arr, int size, int sum){
    vector<vector<int> > ans;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]+arr[j]==sum){
                vector<int> temp; 
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    int arr[] ={1,4,5,2,5,1,6,7,8,2,9,10,0,13,4,6,7,3,2,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum;
    cout<<"Enter sum";
    cin>>sum;
    vector<vector<int> > ans = pairs(arr,size,sum);
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }
    return 0;
}