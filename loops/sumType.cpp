#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> numbers;
    int num; 
    cout<<"Enter a number: ";
    cin>>num;
    int sumPOdd = 0, sumPEven = 0, sumN = 0;
    while(num!=0){
        numbers.push_back(num);
        cout<<"Enter another number: ";
        cin>>num;
    }
    for(int x = 0; x<numbers.size(); x++){
        if(numbers[x]<0){
            sumN += numbers[x];
        }
        else if(numbers[x]>0 && numbers[x]%2==0){
            sumPEven += numbers[x];
        }
        else{
            sumPOdd += numbers[x];
        }
    }
    cout<<sumPEven<<" "<<sumPOdd<<" "<<sumN;
    return 0;
}