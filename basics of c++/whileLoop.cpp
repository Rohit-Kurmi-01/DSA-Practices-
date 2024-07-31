#include<iostream>
using namespace std;

int main()
{
  //sum of (1 To n)

  int sum =0;
  int n;
  cin>>n;
  int i=1;

  while (i<=n)
  {
    /* code */
    sum = sum + i;
     i=i+1;
  }
  
 
  cout << "total sum is i to "<< n << " is " << sum << endl;
  
    
  
}