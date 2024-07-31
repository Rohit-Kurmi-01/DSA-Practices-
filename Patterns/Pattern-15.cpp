#include<iostream>
using namespace std;

// pattern:-

//                              D
//                              C D
//                              B C D
//                              A B C D

int main() {
    int num ;

    cin >> num ;

    int row = 1;

    
    int value = num;
    while (row <= num)
    {
        int col = 1;
        int chr = 65;
        while (col <= row)
        {
            
            cout << char(chr + value -1  ) << " ";
            col++;
            chr++;
            
        }
        row++;
        cout << endl;
        value--;
        
    }
    
}