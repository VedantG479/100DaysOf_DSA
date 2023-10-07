#include<iostream>
using namespace std;
bool linearSearch(int *arr, int key,int size){
    if(size==0)
        return false;
    if(arr[0]==key)
        return true;
    else{
        return linearSearch(arr+1,key,size-1);
    }

}
int main(){
    int arr[]={2,4,5,6,7,2,3,91,291,2};
    int key = 10;
    cout<<linearSearch(arr,key,10);
    return 0;
}