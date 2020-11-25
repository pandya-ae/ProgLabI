#include <iostream>
using namespace std;

int main ()
{
	int data [] = {5, 3, 7, 2, 0, 9, 4, 1, 8, 6};
	int i, dataSize = sizeof (data) / sizeof (data [0]), temp;
	for (int j = 1; j < dataSize; j++)
	{
		i = j-1;
		temp = data [j];
		while (data [i] > temp and i >= 0)
		{
			data [i+1] = data [i];
			i--;
		}
		data [i + 1] = temp;
	}
	for (int j = 0; j < dataSize; j++)
	{
		cout << j << " ";
	}
	return 0;
}
