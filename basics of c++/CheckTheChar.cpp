#include<iostream>
using namespace std;

int main()
{
    char Character;

   cin>>Character;

   int ch = int (Character);  //convert the char to its ASCII value .
//.......................................................................................................
                   //logic

   if (ch >= 97 && ch <= 122)
   {
     cout<<"this is the Character in the lower case :" << endl;

   }
   else if (ch >= 65 && ch <= 90){
     cout << "this is the character is in the upper case: "<< endl;
   }
   else if (ch >= 49 && ch <= 57){
     cout << "this is the Number : " << endl;
   }
   else{
     cout << "this is the special symbol :" << endl;
   }
 //.....................................................................................................  
  
}