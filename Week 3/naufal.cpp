#include <iostream>  
#include <iomanip>  
using namespace std;  
	  
int main() {  
int num =1;  
int numB = 0;  
int numC = numB + num;  
int max, column;  
	      
cin >> max >> column;  
	      
while (numB < max) {  
if (numB > 0) {  
for (int n =0; n<column; n++) {  
cout << setw(4) << numB << " ";  
}  
cout << endl;  
}  
num = numB;  
numB = numC;  
numC = num +numB;  
}  
return 0;  
}  

