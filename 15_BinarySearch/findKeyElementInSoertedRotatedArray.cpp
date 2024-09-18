#include<iostream>
using namespace std;

int findPivot(int arr[] ,int size ){
    int start = 0 ;
    int end = size -1 ;

    int mid = start + (end - start) / 2 ;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1 ;
        }
        else{
            end = mid ;
        }
        mid = start + (end - start) /2 ;
    }
    return start ;
    
}

int findKey(int arr[] , int size , int key ,int pivot){
    int start = 0 ;
    int end = size -1 ;
    int mid = start + (end - start) / 2 ;

    while (start<end)
    {
        if (key >= arr[pivot] && key <= arr[size - 1] )
        {
            if (key == arr[mid])
            {
                return mid ;
            }
            
            start = mid + 1 ;
        }
        else{
            if (key == arr[mid])
            {
                return mid ;
            }
            
            end = mid ;
        }
        mid = start + (end - start) / 2 ;
        
    }
    return start ;
    
}

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
    int key ;
    cout << "enter the key of the array:-  " ;
    cin >> key ;

    int pivot = findPivot(GivenArray ,size ) ;
    cout << "the pivot is present in index :- " << pivot ;
    int index = findKey(GivenArray , size , key ,pivot) ;

    cout << "the key is present in index :- " << index ;

}