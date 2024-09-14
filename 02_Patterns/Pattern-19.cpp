#include<iostream>
using namespace std;

// pattern:-
                   
//                          1
//                        1 2 1
//                      1 2 3 2 1
//                    1 2 3 4 3 2 1
//                  1 2 3 4 5 4 3 2 1

int main() {

    //input
    int num ;
    cin >> num ;

    //Logic :- we devide the pattern into three tringles -> 1. spaces,
    // 2. no. in incresing order,
    // 3. no. in decreasing order.
    int row = 1 ;
    while (row <= num)
    {
        int col = 1;
        // first tringle
        while (col <= (num - row))
        {
            cout << "  " ;
            col ++ ;
        }
        //second tringle
         int value = 1;
        while (col <= num)
        {
            cout << value <<" " ;
            value ++ ;
            col ++ ;
        }
        //third tringle
        while (col <= (num + row -1))
        {
            value-- ;
            cout << value-1 << " " ;
            col++;
        }
        row ++ ;
        cout << endl ;
    }
    
}