#include <iostream>
using namespace std;
 
int main ()
{
   int n, c, first = 1, second = 1, next;
 
   cout << "Enter the number of terms of Fibonacci series:" << endl;
   cin >> n;
 
   cout << "First " << n << " terms of Fibonacci series are : " << endl;
   
   cout << first << endl;
 	
   for ( c = 1 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      cout << next << endl;
   }
   return 0;
}
