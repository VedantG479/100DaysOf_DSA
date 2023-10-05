#include<iostream>
#include<vector>
using namespace std;
void printIntersection(int *a, int *b, int m, int n){
    int i=0, j=0;
    vector<int> commonElements;
    while(i<m && j<n){
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            commonElements.push_back(a[i]);
            i++;
            j++;
        }
    }
    for(int i=0; i<commonElements.size(); i++){
        cout<<commonElements[i];
    }
}
int main(){
    int arr1[] = {1,2,3,4,5,6};
    int arr2[] = {3,4,6,9,11};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);
    printIntersection(arr1,arr2,size1,size2);
    return 0;
}