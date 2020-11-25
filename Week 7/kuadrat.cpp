#include <iostream>
using namespace std;

float kuadrat (float a, int b)
{
	int hasil = 1;
	for (int i = 0; i < b; i++)
	{
		hasil *= a;
	}
	return hasil;
}
