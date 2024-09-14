#include<iostream>
using namespace std ;

int main(){

    int n;

    cin>> n;
    int i = 2;
    int prime = false ;


    while(i<n){
        if (n%i==0)
        {
           prime = true;
           break;
        }
        else{
            prime = false;
        }
        
        i++;
    }
    if (prime)
    {
        cout<<"Not a prime number";
    }
    else{
        cout<<"Prime number";
    }
    
} 