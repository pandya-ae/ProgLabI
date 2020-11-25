#include<iostream>
using namespace std;

int main ()
{
	int exam1, exam2, exam3, midx, finx, finscore, meanscore;
	
	cout << "Please input the exam scores." << endl;
	cout << " " << endl;
	cout << "Regular exam 1 score: ";
	cin >> exam1;
	cout << "Regular exam 2 score: ";
	cin >> exam2;
	cout << "Regular exam 3 score: ";
	cin >> exam3;
	cout << "Midterm exam score: ";
	cin >> midx;
	cout << "Final exam score: ";
	cin >> finx;
	
	meanscore = (exam1 + exam2 + exam3)/3;
	// cout << " " << endl;
	// cout << "Your regular exam mean score is: " << meanscore << endl;
	
	finscore = (meanscore * 0.2) + (midx * 0.4) + (finx * 0.4);
	cout << " " << endl;
	cout << "Your final score is: " << finscore;
	
	if (finscore >= 80){
		cout << " = A" << endl;
	}
	else if (finscore >= 70){
		cout << " = B" << endl;
	}
	else if (finscore >= 60){
		cout << " = C" << endl;
	}
	else if (finscore < 60){
		cout << " = D" << endl;
	}  
}
