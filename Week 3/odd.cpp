#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Enter the first interger: ";
    cin >> a;
    cout << "Enter the second integer: ";
    cin >> b;

    cout << "All the odd numbers between " << a << " and " << b << " (inclusive.)\n";
    if( a % 2 == 0 )
        a++;
    while( a <= b ) {
        cout << a << ", ";
        a += 2;
    }

    return 0;
}
