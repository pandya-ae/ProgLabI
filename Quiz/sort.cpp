#include <iostream>
#include <string>
using namespace std;

string name;
int age;        

Person(string fName, int years)
{
    name = fName;
    if (years <0)
    {
    	years = 0;
	}
    age = years;
}
     
int main()
{
    const int ARRAY_MAX = 100;
    int name = 0;
    int age = 0;
    int people[ARRAY_MAX];
    
    for (int i = 0; i <100; i++)
    {
        while (people.name != -1)
        {
             cout << "Enter name (-1 to stop): ";
             cin >> name;
             cout << "Enter age: ";
             cin >>age;
    	}
    }
}
