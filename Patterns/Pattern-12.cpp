#include<iostream>
using namespace std;

// pattern:-

//                  A B C D E
//                  A B C D E
//                  A B C D E
//                  A B C D E
//                  A B C D E

int main() {
    int num ;

    cin >> num ;

    int row = 1; 

    

    while (row <= num)
    {
        int col = 1;
        int chr = 64; 
        while (col <= num)
        {
            cout << char(chr + col ) << " ";  
            col++;
        }
        row++;
        cout << "\n";
        
    }
    
}