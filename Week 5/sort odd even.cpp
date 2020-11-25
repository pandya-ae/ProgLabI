#include <iostream>
using namespace std;

int main ()
{
    int arr[100], i, num;
    cout << "Enter the size of the array you want: ";
    cin >> num; //reads input from user for array size
    cout << "Enter the elements of the array: ";
    
	for ( i = 0; i < num; i++ )
	{
        cin >> arr[i]; //reads input from user for array elements
    }
    
	cout << "Even numbers of the array are: ";
	for ( i = 0; i < num; i++ )
	{
        if (arr[i]%2==0)
		{ //Separate even  numbers
            cout << arr[i] << " ";
        }
    }
    
    cout << endl;
    
	cout << "Odd numbers of the array are: ";
	for (i = 0; i <= num; i++ )
	{
        if (arr[i]%2==1)
		{//Separate odd numbers
            cout << arr[i] << " ";
        }
    }
    
    return 0;
}
