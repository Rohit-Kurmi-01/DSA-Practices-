#include<iostream>
using namespace std;

int main() {
     int size ;
    cin >> size ;

    int array[100] ;

    for (int i = 0; i < size; i++)
    {
       cin >> array[i];
    }
    int ans = 0 ;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ array[i] ;
    }
    cout<< "the uniqe no .is :-  " << ans ;
    
}