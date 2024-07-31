#include<iostream>
using namespace std;

// pattern:-

//                                 *
//                                **
//                               ***
//                              ****
//                             *****

int main() {
    int num ;

    cin >> num ;

    int row = 1;

    
while (row <= num )
{
    int space = num -row ;
    while (space)
    {
        cout  << " ";
        space --;
    }
    int col = 1;
    while (col <= row)
    {
        cout << "*";
        col++;
    }

    cout << endl;
    row++;
}    
}