#include<iostream>
using namespace std;

// pattern:-

//                       A B C D E
//                       F G H I J
//                       K L M N O
//                       P Q R S T
//                       U V W X Y

int main() {
    int num ;

    cin >> num ;

    int row = 1; 

    int value = 1;

    while (row <= num)
    {
        int col = 1;
        int chr = 64; 
        while (col <= num)
        {

            cout << char(chr + value ) << " ";  
            col++;
            value = value + 1 ;
        }
        row++;
        cout << "\n";
        
    }
}