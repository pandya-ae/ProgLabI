#include <iostream>
using namespace std;

int main ()
{
    int n;    
    int move = 0;
    cin >> n;
    
    move += n/5;
    n %= 5;
    move += n/4;
    n %= 4;
    move += n/3;
    n %= 3;
    move += n/2;
    n %= 2;
    move += n/1;
    n %= 1;
    
    cout << move << endl;
    return 0;
}
