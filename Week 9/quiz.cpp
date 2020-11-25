#include <iostream>
using namespace std;

int main ()
{
	int n;
	cout << "Pair(s) of agents: ";
	cin >> n;
	int powermale [n];
	int powerfemale [n];
	
	for (int i = 0; i < n; i++)
	{
		cout << "Male agent " << i + 1 << " power: ";
		cin >> powermale [i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << "Female agent " << i + 1 << " power: ";
		cin >> powerfemale [i];
	}
	
	for (int j = 1; j < n; j++)
	{
		int i = j - 1;
		int temp = powermale [j];
		while ((powermale [i]) > temp && (i >= 0))
		{
			powermale [i + 1] = powermale [i];
			i--;
		}
		powermale [i + 1] = temp;
	}
	for (int j = 1; j < n; j++)
	{
		int i = j - 1;
		int temp = powerfemale [j];
		while ((powerfemale [i]) > temp && (i >= 0))
		{
			powerfemale [i + 1] = powerfemale [i];
			i--;
		}
		powerfemale [i + 1] = temp;
	}
	
	int totalpower = 0;
	for (int i = 0; i < n; i++)
	{
		totalpower += powermale [i] * powerfemale [i];
	}
	cout << "Highest power: " << totalpower;
}
