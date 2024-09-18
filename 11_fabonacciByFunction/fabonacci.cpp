#include<iostream>
using namespace std;

int feb(int n,int a ,int b ,int c){
    if (n>0)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
        feb(n-1, a, b, c);
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    int a = 0, b = 1, c;
    cout << "The fabonacci series is: ";
    feb(n, a, b , c);
}