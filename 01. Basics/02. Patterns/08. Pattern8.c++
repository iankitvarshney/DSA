#include<bits/stdc++.h>
using namespace std;

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

/*
void pattern8_2(int n) {
	int spaces = 0;
	int stars = 2 * n - 1;

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

		spaces++;
		stars -= 2;
	}
}
*/

int main() {
	int n;
	cin >> n;
	pattern8(n);
	return 0;
}

/*

Input:
5

Output:
*********
 ******* 
  *****  
   ***   
    *    

*/