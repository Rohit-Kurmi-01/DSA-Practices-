#include<iostream>
using namespace std;

// pattern:-
//                       1
//                       2 3
//                       3 4 5
//                       4 5 6 7
int main() {
    int n;

    cin >> n;

    int row = 1;
//==============================================(first method)===========================================================
    cout << "(first method )\n";
    while (row <= n)
    {
        int col = 1;
        int value = row;

        while (col <= row)
        {
           cout << value << " " ;

           col++;

           value++;
        }
        cout << "\n";
        row++;
        
    }
    //==============================================(second method)===========================================================
    cout << "(second method )\n";
    row = 1;
    while (row <= n)
    {
        int col = 1 ;
        while (col <= row)
        {
            cout << row + col -1 << " " ;
            col++;
        }
        row++;
        cout << "\n";
        
    }
    
}