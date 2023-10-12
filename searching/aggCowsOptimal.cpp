#include<iostream>
#include<vector>
using namespace std;
//optimal approach 

bool canPlace(vector<int> stallPosition, int distToCheck, int cows, int size){
    int countCows = 1, last = stallPosition[0];
    for(int i=1; i<size; i++){
        if(stallPosition[i]-last>=distToCheck){
            countCows++;
            last = stallPosition[i];
        }
        if(countCows>=cows){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> stallPosition;
    stallPosition.push_back(1);
    stallPosition.push_back(2);
    stallPosition.push_back(4);
    stallPosition.push_back(8);
    stallPosition.push_back(9);
    int noCows = 3;

    int n = stallPosition.size();
    sort(stallPosition.begin(),stallPosition.end());
    int start = 1, end = stallPosition[n-1] - stallPosition[0];
    int mid = (start + end)/2;
    int ans = -1;
    while(start<=end){
        if(canPlace(stallPosition,mid,noCows,n)==true){
            ans = mid;
            start = mid + 1;
        }
        else{ 
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    cout<<ans;
    return 0;
}