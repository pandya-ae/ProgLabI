#include <iostream>
using namespace std;

int main ()
{
	int min_num, max_num;
	cin >> min_num;
	cin >> max_num;
	for (int i = min_num; i <= max_num; i++){
		cout << i*i << " ";
	}
}
