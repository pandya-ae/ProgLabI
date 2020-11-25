#include <iostream>
using namespace std;

int main()
{
    
	int bill;

    cout << "Enter bill amount: ";
    cin >> bill;
    
    if ( 50000 < bill <= 100000 )
		cout << "The final bill is: " << bill - (bill * 0.1) << endl;
		
	else if ( 100000 < bill <= 200000 )
		cout << "The final bill is: " << bill - (bill * 0.2) << endl;
		
	else if ( bill > 200000 )
		cout << "The final bill is: " << bill - 75000 << endl; 

}
