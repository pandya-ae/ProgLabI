#include <iostream>  
using namespace std;  
	  
	int main (){  
	    int l, n, m, o;  
	    cout << "The number of individual passenger = ";  
	    cin >> l;  
	    cout << "The number of couples = ";  
	    cin >> n;  
	    cout << "The number of family of 3 = ";  
	    cin >> m;  
	    cout << "The number of family of 4 = ";  
	    cin >> o;  
	    int taxi =0;  
	      
	    taxi += o;  
	      
	    while (m>0) {  
	            m -=1;  
	        if (l>0) {  
	            l-=1;  
	        }  
	        taxi++;  
	    }  
	    while (n>0) {  
	        if (n >= 2) {  
	            n-=2;  
	        }else if (l>=2){  
	            n-=1;  
	            l-=2;  
	        }else {  
	            n-=1;  
	            l-=l;  
	        }  
	        taxi++;  
	    }  
	    while (l>0) {  
	        if (l >= 4) {  
	            l-= 4;  
	        }else{  
	            l -= l;  
	        }  
	        taxi++;  
	    }  
	    cout << "The number of taxi needed is " << taxi << "." << endl;  
	    }
