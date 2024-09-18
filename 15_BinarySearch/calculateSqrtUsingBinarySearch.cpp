#include<iostream>
using namespace std;
 int sqrint(int n){
        int s = 0 ;
        int e = n ;
        long long int mid = s + (e - s) / 2 ;
        long long int ans = 0;
        while(s <= e){
            long long int sqr = mid*mid ;
            if(sqr == n){
                return mid ;
            }
            else if(sqr < n){
                ans = mid ;
                s = mid + 1 ;
            }
            else{
                e = mid - 1 ;
            }
            mid = s + (e - s) / 2 ;
            
        }
        return ans ;
    }
    int mySqrt(int x) {
        return sqrint(x);
    }

double moreEfficient(int sqrI , int n, int num){
    double point = 1 ;
    double ans = sqrI;
    for (int i = 0; i < num; i++)
    {
        point = point / 10 ;
        for (double j = ans; j*j < n; j = j+point )
         {

                ans = j ;
                
        }
        
    }
     return ans;
}


int main() {
    int n ;
    cout << "enter the number ";
    cin >> n ;
    int sqrtInteger = sqrint(n) ;
    
    int num ;
    cout << "if it have decimal point values so which renge you want " ;
    cin >> num ;

   cout <<"the sqrt of " << n << " is " << moreEfficient(sqrtInteger , n ,num) <<endl ;


}