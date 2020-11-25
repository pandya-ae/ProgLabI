#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t1 = 1, t2 = 1, next, m, n, c;
    cout << "Enter the maximum number: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> c;
    
    while ( t2 < m )
    {
    	if ( t2 > 0)
    	{
			for ( n = 0; n < c; n++)
			{  
        cout << setw(5) << t2 << " ";
    		}
        cout << endl;
    	}
		t1 = t2;
        t2 = next;
        next = t1 + t2;	
    }
    
	return 0;
}
