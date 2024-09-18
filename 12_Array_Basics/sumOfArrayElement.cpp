#include<iostream>
using namespace std;

int sumOfArrayElement(int arr[] , int arrSize){
    int value = 0;

    for (int i = 0; i < arrSize; i++)
    {
        value = value + arr[i] ;
    }

    return value ;
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

    int sum = sumOfArrayElement(GivenArray , size) ;

    cout << "The sum of the all arrey element is :- " << sum << endl ;
    

}