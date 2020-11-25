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
	int x, z;
	cin >> x >> z;
	int y;
	y = x*x + z*z + x*z;
	cout << y;
}
