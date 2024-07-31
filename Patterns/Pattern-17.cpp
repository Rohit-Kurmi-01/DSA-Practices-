#include<iostream>
using namespace std;

int main() {
    
    int num ;

    cin >> num ;

    int row = 1;

    int value = row;

    while (row <= num)
    {
        int col = 1;

        while (col <= value)
        {
           cout << "*"; 
           col++;

        }
        row++;
        cout << "\n";
        value--;
        
    }
    
}