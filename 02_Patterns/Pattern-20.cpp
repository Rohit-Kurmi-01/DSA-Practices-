#include<iostream>
using namespace std;
// pattern:-

//                  1 2 3 4 5 5 4 3 2 1
//                  1 2 3 4 * * 4 3 2 1
//                  1 2 3 * * * * 3 2 1
//                  1 2 * * * * * * 2 1
//                  1 * * * * * * * * 1

int main() {

    //input
    int num ;
    cin >> num ;

    //Logic

    int row = 1 ;
    int value = 0 ;
    while (row <= num)
    {
        int col = 1;

        //first tringle
        int value_1 = 1;
        while (col <= num - value)
        {

            cout << value_1 << " " ;
            col ++;
            value_1++;
        }

        //second tringle
        while (col <= num)
        {
            cout << "* " ;
            col ++; 
        }
        col = 1;
        // thired tringle
        while (col <= row - 1)
        {
            cout << "* " ;
            col ++;   
        }
        //most imp tringle
        col = 1;
        while (col <= num  )
        {
            if (value_1 == 1)
            {
                break;
            }
            else
            {
                 cout << value_1 -1 << " " ;
                 col ++;
                 value_1 -- ;
            }
            
        }
        

        value ++; 
        row ++;
        cout << endl;
    }
    
}