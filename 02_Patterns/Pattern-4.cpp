#include<iostream>
using namespace std;

// pattern:-

// 7654321
// 7654321
// 7654321
// 7654321
// 7654321
// 7654321
// 7654321


// ..................................Type - 1 ................................................................
int main (){
     
    int i = 1;
    int n;
    cin >> n;
    
    int x = n;
    cout << " Type - 1 Result \n";
    while (i<=n)
    {   int j = 1;
        while (j<=n)
        {
            cout<<n;
            
            n--;
            
        }
        n = x;
        cout<<"\n";

        i=i+1;
    }
 
    
   

//  ............................................type - 2 ...........................................................
    cout << " Type - 2 Result \n";

   i = 1;
    while (i<=n)
    {   int j = 1;
        while (j<=n)
        {
            cout<<n-j+1;
            
           j++;
            
        }
        
        cout<<"\n";
        i++;
    }
}