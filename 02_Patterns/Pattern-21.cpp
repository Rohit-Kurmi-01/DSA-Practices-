#include<iostream>
using namespace std;

// Pattern:-
                                    // 1 2 3 4 5
                                    // 2 3 4 5
                                    // 3 4 5
                                    // 4 5
                                    // 5                                    

int main() {
    int n ;
    cin >> n ;

    for (int i = 1; i <= n; i++)
    {
        int s = 0 ;
        for (int j = i; j <= n; j++)
        {
            s++ ;
            cout << j << " " ;
        }
        cout << endl ;
    }
    
}