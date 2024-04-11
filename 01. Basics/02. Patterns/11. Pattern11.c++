#include<bits/stdc++.h>
using namespace std;

void pattern11(int n) {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j <= i; j++) {
			if((i + j) % 2 == 0) {
				cout << "1 ";
			}
			else {
				cout << "0 ";
			}
		}
		cout << "\n";
	}
}

int main() {
	int n;
	cin >> n;
	pattern11(n);
	return 0;
}

/*

Input:
5

Output:
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 

*/