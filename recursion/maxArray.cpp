#include<iostream>
using namespace std;
int max(int *arr, int size,int index){
    //base case
    if(index == size - 1){
        return arr[index];
    }

    return max(arr[index],max(arr,size,index+1));
}
int main(){
    int arr[100];
    int size;
    cout<<"ENTER SIZE OF ARRAY";
    cin>>size;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"MAXIMUM ELEMENT IS: "<<max(arr,size,0);
    return 0;
}