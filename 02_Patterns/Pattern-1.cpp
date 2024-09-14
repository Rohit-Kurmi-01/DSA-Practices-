#include<iostream>
using namespace std;

// pattern:-

//           *****
//           *****
//           *****
//           *****
//           *****

int main (){

    int i = 1;
    int n;
    cin >> n;

    while (i<=n)
    {   int j = 1;
        while (j<=n)
        {
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;
    }
    
}