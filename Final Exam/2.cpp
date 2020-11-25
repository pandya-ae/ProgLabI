#include <iostream>
using namespace std;

int main ()
{
	int magnets;
	cin >> magnets;
 	int group = 1;
 	int arr[100000];
	for (int i = 0; i < magnets; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < magnets - 1; i++)
	{
    	if (arr[i]!= arr[i + 1])
        group++;
	}
    cout << group << endl;
}
