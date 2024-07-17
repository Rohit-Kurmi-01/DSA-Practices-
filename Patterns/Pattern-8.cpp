#include<iostream>
using namespace std;

// pattern:-

            // 1
            // 2 3
            // 4 5 6

int main() {
    int num;

    cin >> num;

    int row = 1;

    int sum = 0;

    while (row <= num)
    {
        int col = 1;
        while (col <= row)
        {
              sum++;
              cout << sum << " " ;
              col++;
        }
        cout << endl;
        row++;
        
    }
    
}