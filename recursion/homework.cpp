#include<iostream>
using namespace std;
int valueX(int n, int a, int x = 0){
    // n(given) = a(given) ^ x(toFind)

    // Base case: If n is 0, x is also 0
    if (n == 0) {
        return x;
    }

    // Recursively find x by repeatedly performing the XOR operation
    x = x ^ a;
    n = n >> 1;  // Right-shift n by 1 bit

    // Continue recursion with the updated n and x
    return valueX(n, a, x);
}
int main(){
    int n, a;
    cin>>n>>a;
    cout<<valueX(n,a);
    return 0;
}