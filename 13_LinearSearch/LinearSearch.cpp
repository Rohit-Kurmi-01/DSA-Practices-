#include<iostream>
using namespace std;

int main() {
    int arr[10] = {1 ,2,43,5,46,67,346,33,7,8} ;

    cout << "enter the key value for search in the array :- " ;

    int key , index ;

    cin >> key ;

    for (int i = 0; i < 10; i++)
    {
        if (key == arr[i])
        {
            index = i ;
            break;

        }
        
        
    }

    if (index)
    {
        cout << "the key value is found at :- " << index << endl ;
    }
    else{
        cout << "key not found" <<endl ;
    }
    
    
}