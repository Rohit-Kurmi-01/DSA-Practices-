#include<iostream>
#include<math.h>
using namespace std;

int main() {

    int num ;

    cin >> num ;

    int ans = 0;

    int i = 0;

    while (num != 0)
    {
        int digit = num % 10;

        ans = (digit * pow(2, i)) + ans;

        i++ ;

        num = num / 10 ;

    }
    cout << ans << endl ;
}