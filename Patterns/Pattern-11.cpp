#include<iostream>
using namespace std;

// pattern:-


//                     A A A A A
//                     B B B B B
//                     C C C C C
//                     D D D D D
//                     E E E E E


int main() {
    int num ;

    cin >> num ;

    int row = 1; 

    

    while (row <= num)
    {
        int col = 1;
        int chr = 64; // we can write 'A' directly .
        while (col <= num)
        {
            cout << char(chr + row ) << " ";   // if we initialize chr to 65 than we write in the bracket => (chr + row -1)
            col++;
        }
        row++;
        cout << "\n";
        
    }
    
}