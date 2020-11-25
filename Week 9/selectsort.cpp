#include <iostream>
using namespace std;

int main ()
{
	int data [] = {5, 3, 7, 2, 0, 9, 4, 1, 8, 6};
	int dataSize = sizeof (data) / sizeof (data[0]), min, temp;
	for (int i = 0; i < dataSize - 1; i++)
	{
		min = 1;
		for (int j = i + 1; j < dataSize; j++)
		{
			if (data [j] < data [min])
			{
				min = j;
			}
		}
		temp = data [i];
		data [i] = data [min];
		data [min] = temp;
	}
	for (int i = 0; i < dataSize; i++)
	{
		cout << i << " ";
	}
	return 0;
}
