#include<iostream>
using namespace std;

int main() {
    int num;

    cin >> num;

    int row = 1;

    char ch = 65;

    while (row <= num)
    {
        int col = 1 ;

        while (col <= num)
        {
            cout << char(ch + row + col -2 )<< " " ;

            col ++ ;

        }

        row ++ ;

        cout << "\n";
       
    }
    
}