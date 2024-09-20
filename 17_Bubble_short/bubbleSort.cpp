#include<iostream>
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
    bool isSwap = false ;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (GivenArray[j] > GivenArray[j+1])
            {
                swap(GivenArray[j] , GivenArray[j+1]) ;
                isSwap = true ; //for best case 

            }
            
        }
        if (!isSwap)
        {
            break;
        }
        
        
    }

    for (int i = 0; i < size; i++)
    {
        cout << GivenArray[i] << " " ;
    }
    
    

}
