#include<iostream>
using namespace std;

int fact(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fact(n - 1);
}

int permutation(int n, int r) {
    return fact(n) / fact(n - r);
}

int main() {
    int n , r;
    cout << "Enter the value of n and r: ";
    cin >> n >> r;
    if (n < r)
    {
        cout << "Invalid input Data" << endl;
        return 0;
    }
    
    cout << "Permutations of " << n << "and" << r << " is: " << permutation(n,r)<< endl;
}