#include<iostream>
using namespace std;

// pattern:-

//     1
//    23
//   345
//  4567
// 56789

int main() {
    
    int num ;

    cin >> num ;

    int row = 1;

   

    while (row <= num)
    {
        int col = 1;
        int value = row;

        while (col <= (num-row))
        {
           cout << " "; 
           col++;

        }
     
        while (col <= num )
        {
            cout << row ;
            col++;
            row++;
        }
        row = value;
        row++;
        cout << "\n";
        
    }
    
}