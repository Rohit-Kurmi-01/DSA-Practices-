#include<iostream>
using namespace std;

int fact(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fact(n - 1);
}

int main() {
    int n, r;
    cout << "Enter the value of n and r: ";
    cin >> n >> r;
    if (n < r)
    {
        cout << "Invalid input Data" << endl;
        return 0;
    }
    cout << "Combination of " << n << " and " << r << " is: " << fact(n) / (fact(r) * fact(n - r)) << endl;   
}