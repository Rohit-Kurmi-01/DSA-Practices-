#include<iostream>
using namespace std;

int findPivot(int arr[], int size){
    int start = 0;
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

        mid = start + (end - start) / 2 ;
    }
    return start ;
}

int main() {
    int size ;
    cout << "enter the size of the array:-  " ;
    cin >> size ;

    int GivenArray[100] ;

    cout<< "enter the value of array element :- " ;

    for (int i = 0; i < size; i++)
    {
        cin >> GivenArray[i] ;
    }
    
    int pivot = findPivot(GivenArray , size) ;

    cout << "the pivot element is find at index :- " << pivot ;

    
 
}