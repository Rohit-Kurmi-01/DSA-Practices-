#include<iostream>
using namespace std;

int main() {
    int size;
    cout << "enter the value of array size :- " ;
    cin >> size ;

    int  arr [100] ;

    cout<< "enter arr element :- " ;
    
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i] ;
    }
    
    int start = 0 ;
    int end = size - 1 ;

    while (start < end)
    {
        swap(arr[start] , arr[end]) ;
        start ++ ;
        end -- ;
    }

    cout<< "updeted array" << endl ;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    
    
}