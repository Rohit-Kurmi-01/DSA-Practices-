#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int GivenNum ;

    cin >> GivenNum ;
    int answer = 0 ;
    int i = 0 ;

    while (GivenNum != 0)
    {
        int bit = GivenNum & 1 ;

        answer = (bit * pow(10 , i)) + answer ;

        

       GivenNum = GivenNum >> 1 ;
       i++ ;

    }

    cout << answer << endl;


    return 0;
    
}