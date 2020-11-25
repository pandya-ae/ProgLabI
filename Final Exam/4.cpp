#include <iostream>
#include <algorithm>
using namespace std;

int n, cube[100000];
int main() 
{
    cin >> n;
    for (int i = 0; i < n; i++) 
	{
        cin >> cube[i];
    }
    sort (cube, cube + n);
    for (int i = 0; i < n; i++) 
	{
        cout << cube[i] << " ";
    }
}
