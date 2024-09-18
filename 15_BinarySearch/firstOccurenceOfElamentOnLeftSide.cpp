#include<iostream>
using namespace std;

int firstOccurence(int arr[] , int size , int key) {

    int start = 0 ;
    int end = size -1 ;
    int index ;

    int mid = start +(end - start)/2 ;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            index = mid ;
            end = mid - 1 ; 
        }
        else if(key >arr[mid]){
             start = mid + 1 ;
        }
        else if (key < arr[mid])
        {
            end = mid -1 ;
        }
        mid = start +(end - start)/2;
        
    }
    cout << "first occurence of key at " << index ;
      return index ;
        
}

int LastOccurence(int arr[] , int size , int key) {

    int start = 0 ;
    int end = size -1 ;
    int index ;

    int mid = start +(end - start)/2 ;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            index = mid ;
            start = mid + 1 ; 
        }
        else if(key >arr[mid]){
             start = mid + 1 ;
        }
        else if (key < arr[mid])
        {
            end = mid -1 ;
        }
        mid = start +(end - start)/2;
        
    }
    cout << "last occurence of key at " << index ;
      return index ;
        
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

    firstOccurence(GivenArray , size ,key) ;
    LastOccurence(GivenArray , size ,key) ;
}