#include <iostream> 
using namespace std; 
 
int hcfRec (int a, int b) 
{ 
	if (b == 0) 
	return a; 
	return hcfRec (b, a % b); 
}

int hcfUnrec (int a, int b)
{ 
   if (a == 0 or b == 0) 
      return 0; 
   else if (a == b) 
      return a; 
   else if (a > b) 
      return hcfUnrec (a-b, b); 
   else return hcfUnrec (a, b-a); 
} 

int main() 
{ 
	int a, b;
	cout << "Enter two numbers: ";
	cin >> a >> b; 
	cout << "Highest common factor of " << a << " and " << b << " is " << hcfRec (a, b) << endl;
	cout << "Highest common factor of " << a << " and " << b << " is " << hcfUnrec (a, b) << endl; 
	return 0; 
} 
