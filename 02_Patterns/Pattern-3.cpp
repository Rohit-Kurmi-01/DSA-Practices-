#include<iostream>
using namespace std;


// pattern:-
            //  1 2 3
            //  1 2 3
            //  1 2 3


int main (){

    int i = 1;
    int n;
    cin >> n;

    while (i<=n)
    {   int j = 1;
        while (j<=n)
        {
            cout << j << " ";
            j++;
        }
        cout<<"\n";
        i++;
    }
    
}