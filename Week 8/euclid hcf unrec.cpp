#include<iostream>
using namespace std;

int hcf (int a, int b)
{ 
   if (a == 0 or b == 0) 
      return 0; 
   else if (a == b) 
      return a; 
   else if (a > b) 
      return hcf (a-b, b); 
   else return hcf (a, b-a); 
}
 
int main()
{ 
   int a, b;
   cout << "Enter two numbers: ";
   cin >> a >> b; 
   cout << "HCF of " << a << " and " << b << " is " << hcf (a, b); 
   return 0; 
} 
