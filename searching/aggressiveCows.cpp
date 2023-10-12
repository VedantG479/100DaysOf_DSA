#include<iostream>
#include<vector>
using namespace std;
//brute force

bool isPossible(vector<int> stalls, int numberCows, int distance){
    int countCows = 1, lastPos = stalls[0];
    for(int i=1; i<stalls.size(); i++){
        if(stalls[i] - lastPos >= distance){
            countCows++;
            lastPos = stalls[i];
        }
        if(countCows>=numberCows)   return true;
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
    sort(stallPosition.begin(),stallPosition.end());
    int limit = stallPosition[4] - stallPosition[0];
    for(int i=1; i<=limit; i++){
        if(isPossible(stallPosition,noCows,i)==false){
            cout<<"Maximum possible minimum distance: "<<i-1;
            return 0;
        }
    }
    cout<<"Maximum possible distance is: "<<limit;
    return 0;
}