#include<iostream>
#include<algorithm>
using namespace std;

int main() {
     int size ;
    cout << "enter the size of the array:-  " ;
    cin >> size ;

    int GivenArray[100] ;

    cout<< "enter the value of array element" ;

    for (int i = 0; i < size; i++)
    {
        cin >> GivenArray[i] ;
    }

   int mini = 0 ;
    
    for (int i = 0; i < size ; i++)
    {
        for (int j = i; j < size; j++)
        {
            // mini = min(GivenArray[i] , GivenArray[j]) ;
            if (GivenArray[i] > GivenArray[j])
            {
                swap(GivenArray[i] ,GivenArray[j]) ;
            }
            
        }
        
    }

    for (int i = 0; i <= size - 1; i++)
    {
        cout << GivenArray[i] << " ";
    }
    
    
}