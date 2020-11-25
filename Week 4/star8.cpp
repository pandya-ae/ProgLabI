#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    for(int i = 1; i <= rows;  i++){ // outer for loop
            for(int j=1; j <= i; j++){ // inner for loop 
                cout << "*"; // print star fot pyramid top half
            }
             cout << "\n";  // move to next line
    }
            for(int i = rows; i >= 1; i--){ // outer for loop
            	for(int j = 1; j <= i; j++){ // inner loop
                 	cout << "*" ; // print star for bottom half
            }
 	cout << "\n";
    }
    return 0;
}
