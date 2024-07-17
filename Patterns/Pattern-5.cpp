#include<iostream>
using namespace std;

// pattern:-

//            1 2 3
        //    4 5 6
        //    7 8 9

int main (){

    int i = 1;
    int n;
    cin >> n;
   int sum = 0;
    while (i<=n)
    {   int j = 1;
        while (j<=n)
        {
            sum++;
            cout<<sum << " ";
            j++;
        }
        cout<<"\n";
        i++;
    }
    
}