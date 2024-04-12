#include<bits/stdc++.h>
using namespace std;

void pattern15(int n) {
	for(int i = n; i > 0; i--) {
		for(char ch = 'A'; ch < 'A' + i; ch++) {
			cout << ch << " ";
		}
		cout << "\n";
	}
}

int main() {
	int n;
	cin >> n;
	pattern15(n);
	return 0;
}

/*

Input:
5

Output:
A B C D E 
A B C D 
A B C 
A B 
A 

*/