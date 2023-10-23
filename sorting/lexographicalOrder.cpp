#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[10] = {"papaya","lime","watermelon","apple","mango","kiwi"};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<size-1; i++){
        int minIndex = i;
        for(int j=i+1; j<size; j++){
            if(arr[j]<arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex],arr[i]);
    }

    for(string x: arr){
        cout<<x<<" ";
    }
    return 0;
}