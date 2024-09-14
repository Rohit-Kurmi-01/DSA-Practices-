#include<iostream>
#include<math.h>
using namespace std;


int main() {

    int num ;

    cin >> num ;

    int INT_MIN = pow(-2,31) ;
    int INT_MAX = pow(2,31) - 1 ;

    int ans = 0;

    int i = 0;

    while (num != 0)
    {
        int digit = num % 10;

       if ((ans > INT_MAX /10) || (ans > INT_MIN /10))
       {
        cout << "0";
        return 0 ;
       }
       
        ans = (ans * 10) + digit;
        num = num / 10 ;

    }
    cout << ans << endl ;
}