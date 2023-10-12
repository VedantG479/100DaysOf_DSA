#include<iostream>
using namespace std;
bool linear(int arr[], int size, int target){
    if(size==0){
        return false;
    }

    if(arr[0]==target){
        return true;
    }
    else{
        bool check = linear(arr+1,size-1,target);
        return check;
    }
}
int main(){
    int arr[] = {2,1,5,6,1,7,8,2,4,7};
    int size = 10;
    int element;
    cout<<"Enter element to find: ";
    cin>>element;
    cout<<linear(arr,size,element);
    return 0;
}