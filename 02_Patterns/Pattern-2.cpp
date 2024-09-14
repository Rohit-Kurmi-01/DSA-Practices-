#include<iostream>
using namespace std;

// pattern:-

//           1111111
//           2222222
//           3333333
//           4444444
//           5555555

int main (){

    int i = 1;
    int n;
    cin >> n;

    while (i<=n)
    {   
        int j = 1;
        while (j<=n)
        {
            cout<<i;
            j++;
        }
        cout<<"\n";
        i++;
    }
    
}