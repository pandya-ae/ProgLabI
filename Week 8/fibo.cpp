#include <iostream> 
using namespace std; 

int fib (int n) 
{ 
	if (n <= 1) 
	return n; 
	return fib (n-1) + fib (n-2); 
} 

int main () 
{ 
	int n;
	cout << "Enter terms of fibonacci: ";
	cin >> n; 
	cout << fib(n);  
	return 0; 
} 
