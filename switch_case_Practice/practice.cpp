#include<iostream>
using namespace std;

int main() {
    int number ;

    cout << "Enter a number: ";

    cin >> number;

    int hundrade,twinty, one ;
    
    switch (1) {
        case 1:
            if (number >= 100)
            {
                hundrade = number / 100;
            cout << "No of hundrade rs. note is" <<hundrade<< endl;
                
            }
            number = number - (hundrade * 100);
            
            
        case 2:
             if (number >= 20)
            {
                twinty = number / 20;
            cout << "No of twinty rs. note is" <<twinty<< endl;
                
            }
            number = number - (twinty * 20);
            
        case 3:
             if (number >= 1)
            {
                one = number / 1;
            cout << "No of one rs. note is" <<one<< endl;
                
            }
           break;
        
        default:
            cout << "currency can't be negative or zero" << endl;
    }
}