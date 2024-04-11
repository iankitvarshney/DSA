#include<bits/stdc++.h>
using namespace std;

void pattern12(int n) {
	for(int i = 1; i <= n; i++) {
		// numbers
		for(int j = 1; j <= i; j++) {
			cout << j;
		}

		// spaces
		for(int j = 1; j <= 2*(n-i); j++) {
			cout << " ";
		}

		// numbers
		for(int j = i; j > 0; j--) {
			cout << j;
		}
		cout << "\n";
	}
}

int main() {
	int n;
	cin >> n;
	pattern12(n);
	return 0;
}

/*

Input:
5

Output:
1        1
12      21
123    321
1234  4321
1234554321

*/