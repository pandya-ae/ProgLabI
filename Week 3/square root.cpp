#include <iostream>
using namespace std;

int main(){
  int squareroot = 0;
  int number;

  cout << "enter a number that i can calculate its squareroot" << endl;

  cin >> number;

  while (squareroot * squareroot < number){
      squareroot+=1;
  }

  if (squareroot * squareroot != number) --squareroot;

  cout << "the square root is " << squareroot << endl;
  return 0;
}
