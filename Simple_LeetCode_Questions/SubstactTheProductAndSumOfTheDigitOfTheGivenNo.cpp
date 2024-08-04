#include<iostream>
using namespace std;
int substraction(int num);
int main() {
    int num;
    cin >> num ;
    substraction(num);
}
    int substraction(int num)
    {

        int product = 1;

        int sum = 0;

        while (num != 0)
        {
            int digit = num % 10 ;

            product = product * digit ;

            sum = sum + digit ;

            num = num / 10 ;
        }

        int answer = product - sum ;

        cout << answer ;

        return answer ; 
        }
