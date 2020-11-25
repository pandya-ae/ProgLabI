#include <iostream>
using namespace std;

float fox (float x, float z)
{
	float y;
	y = x*x + z*z + x*z;
	return y; 
}

main ()
{
	int a, b;
	cin >> a >> b;
	int c;
	c = fox (a,b);
	cout << c;
}
