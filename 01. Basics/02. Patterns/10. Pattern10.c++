#include<bits/stdc++.h>
using namespace std;

void pattern2(int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}

void pattern5(int n) {
	for(int i = n; i > 0; i--) {
		for(int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << "\n";
	}
}

void pattern10(int n) {
	pattern2(n);
	pattern5(n-1);
}

/*
void pattern10_2(int n) {
	int stars = 1;

	for(int i = 0; i < (2*n-1); i++) {
		for(int j = 0; j < stars; j++) {
			cout << "*";
		}
		cout << "\n";

		stars = (i < n-1) ? stars + 1 : stars - 1;
	}
}
*/

int main() {
	int n;
	cin >> n;
	pattern10(n);
	return 0;
}

/*

Input:
5

Output:
*
**
***
****
*****
****
***
**
*

*/