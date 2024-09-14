#include<iostream>
using namespace std;

// pattern:-

//     1
//    12
//   123
//  1234
// 12345

int main() {
    
    int num ;

    cin >> num ;

    int row = 1;

   while (row <= num)
    {
        int col = 1;

        while (col <= (num-row))
        {
           cout << " "; 
           col++;

        }
     int value = 1;
        while (col <= num )
        {
            
            cout << value;
            col++;
            value++;
        }
        
        row++;
        cout << "\n";
        
    }
    
}