#include <iostream>
using namespace std;

struct fullname
{
	string firstname;
	string lastname;
};

struct studentrec
{
	fullname name;
	string idnum;
	float gpa;
};

studentrec thestudent[10];

int main ()
{
	int n;
	cin >> n;
	
	for ( int i = 0; i < n; i++)
	{
		cin >> thestudent[i].name.firstname;
		cin >> thestudent[i].name.lastname;
		cin >> thestudent[i].idnum;
		cin >> thestudent[i].gpa;
	}
	
	return 0;
}
