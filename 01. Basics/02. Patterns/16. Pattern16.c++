#include<bits/stdc++.h>
using namespace std;

void pattern16(int n) {
	for(int i = 0; i < n; i++) {
		char ch = 'A' + i;
		for(int j = 0; j <= i; j++) {
			cout << ch << " ";
		}
		cout << "\n";
	}
}

int main() {
	int n;
	cin >> n;
	pattern16(n);
	return 0;
}

/*

Input:
5

Output:
A 
B B 
C C C 
D D D D 
E E E E E 

*/