#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t1 = 1, t2 = 1, next = 0, n, c;
    cout << "Enter a positive number: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> c;
    
    next = t1 + t2;
    while ( next <= n )
    {
        cout << "Fibonacci Series: " << t1 << ", " << t2 << ", " << next << ", ";
    
		t1 = t2;
        t2 = next;
        next = t1 + t2;
	}
    
    return 0;
}
