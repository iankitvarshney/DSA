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

/*
void pattern7_2(int n) {
	int spaces = n - 1;
	int stars = 1;

	for(int i = 0; i < n; i++) {
		// spaces
		for(int j = 0; j < spaces; j++) {
			cout << " ";
		}
		// stars
		for(int j = 0; j < stars; j++) {
			cout << "*";
		}
		// spaces
		for(int j = 0; j < spaces; j++) {
			cout << " ";
		}
		cout << "\n";

		spaces--;
		stars += 2;
	}
}
*/

int main() {
	int n;
	cin >> n;
	pattern7(n);
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

*/