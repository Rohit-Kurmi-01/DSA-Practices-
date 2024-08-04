#include<iostream>
using namespace std;

int main() {
    int binary_number ;

    cout << "enter the no. in 0 or 1 formate :-" << endl ;

    cin >> binary_number ;

    int count = 0;

    while (binary_number != 0)
    {
        if (binary_number & 1)
        {
            count++;
        }
        binary_number = binary_number >> 1 ;
        
    }

    cout << count ;
    
}