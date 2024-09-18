#include<iostream>
using namespace std;

int BinarySearch(int arr[] , int size ,int key){
    int start = 0;
    int end = size -1 ;

    int mid = start + (end - start) / 2 ;

    while (start <= end)
    {
        if(arr[mid] ==key){
            cout << "key found at index:-  " << mid ;
            return mid ;
        }

        // go to right
        if (key > arr[mid])
        {
           start = mid + 1 ;
        }
        else{
            end = mid - 1 ;
        }
        mid = start + (end - start) / 2 ;
        
    }
     cout << "key not found " ;
    return -1 ;
    
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

    int keyValue = BinarySearch(GivenArray ,size , key) ;

    
}