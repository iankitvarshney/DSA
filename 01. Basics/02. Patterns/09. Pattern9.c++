#include<bits/stdc++.h>
using namespace std;

void pattern7(int n) {
	for(int i = 0; i < n; i++) {
		// spaces
		for(int j = 0; j < (n-1-i); j++) {
			cout << " ";
		}
		// stars
		for(int j = 0; j < (2*i+1); j++) {
			cout << "*";
		}
		// spaces
		for(int j = 0; j < (n-1-i); j++) {
			cout << " ";
		}
		cout << "\n";
	}
}

void pattern8(int n) {
	for(int i = 0; i < n; i++) {
		// spaces
		for(int j = 0; j < i; j++) {
			cout << " ";
		}
		// stars
		for(int j = 0; j < (2*(n-i)-1); j++) {
			cout << "*";
		}
		// spaces
		for(int j = 0; j < i; j++) {
			cout << " ";
		}
		cout << "\n";
	}
}

void pattern9(int n) {
	pattern7(n);
	pattern8(n);
}

int main() {
	int n;
	cin >> n;
	pattern9(n);
	return 0;
}

/*

Input:
5

Output:
    *    
   ***   
  *****  
 ******* 
*********
*********
 ******* 
  *****  
   ***   
    *    

*/