#include<iostream>
using namespace std;
int sum(int arr[], int size){
    if(size==1){
        return arr[0];
    }
    return arr[0] + sum(arr+1,size-1);
}
int main(){
    int arr[] = {2,2,5,6,1,7,0,8,9,12};
    int size = 10;
    cout<<sum(arr,size);
    return 0;
}