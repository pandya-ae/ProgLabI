#include <iostream>
#include <stdio.h>
using namespace std;

void mergesort(int low, int high)
{
	int mid;
	if (low < high)
	{
		mid = low + (high - low)/2;
		mergesort(low, mid);
		mergesort(mid + 1, high);
		mergesort(low, mid, high);
	}
}
