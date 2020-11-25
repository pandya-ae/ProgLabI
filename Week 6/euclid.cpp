#include <iostream>
#include <math.h>
using namespace std;

int ch;
double x;
double y;
double a;
double b;
double answer;

double distanceBetweenTwoPoints(double x, double y, double a, double b);

int main()
{
	cout << "Enter the points for the coordinates";
    cout << endl;
    cout << "Point x for 1st coordinate: ";
    cin >> x;
    cout << "Point y for 1st coordinate: ";
    cin >> y;
    cout << "Point x for 2nd coordinate: ";
    cin >> a;
    cout << "Point y for 2nd coordinate: ";
    cin >> b;
    answer = distanceBetweenTwoPoints(x, y, a, b);
    cout << "The answer is " << answer;
}

double distanceBetweenTwoPoints(double x, double y, double a, double b){
return sqrt(pow(x - a, 2) + pow(y - b, 2));
}
