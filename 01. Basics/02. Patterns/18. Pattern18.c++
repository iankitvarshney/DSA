#include<bits/stdc++.h>
using namespace std;

void pattern18(int n) {
	char lastch = 'A' + (n - 1);
	for(int i = 0; i < n; i++) {
		for(char ch = lastch - i; ch <= lastch; ch++) {
			cout << ch << " ";
		}
		cout << "\n";
	}
}

int main() {
	int n;
	cin >> n;
	pattern18(n);
	return 0;
}

/*

Input:
5

Output:
E 
D E 
C D E 
B C D E 
A B C D E 

*/