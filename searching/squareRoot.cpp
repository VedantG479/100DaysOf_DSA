#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    int start = 1, end = number;
    int mid = start + (end-start)/2;
    int answer = -1;
    while(start<=end){
        if(mid*mid>number){
            end = mid - 1;
        }
        else if(mid*mid<number){
            answer = mid;
            start = mid + 1;
        }
        else{
            cout<<"Square root is: "<<mid;
            return 0;
        }
        mid = start + (end-start)/2;
    }
    cout<<"Square root is: "<<answer;
    return 0;
}