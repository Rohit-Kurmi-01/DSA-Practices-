#include<iostream>
using namespace std;

void printArray(int arr[] , int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    
}

void swapElement(int arr[] , int size){
    for (int i = 0; i < size; i += 2)
    {
        if (i+1 < size)
        {
        swap(arr[i] ,arr[i+1]) ;
           
        }
        
    }
    
}

int main() {
    int size ;
    cin >> size ;

    int array[100] ;

    for (int i = 0; i < size; i++)
    {
       cin >> array[i];
    }
     printArray(array ,size) ;

    swapElement(array , size) ; //its only swaping not print anything .

    printArray(array ,size) ;
    
}