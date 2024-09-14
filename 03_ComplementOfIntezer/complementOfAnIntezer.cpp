#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int num = n;
    int count = 0;
    while(n) {
        n = n >> 1;
        count++;
    }
    int mask = pow(2, count) - 1;
    cout << "Complement of " << num << " is: " << ((num > 0) ? ((~num) & mask) : 1) << endl;
    
}