#include<bits/stdc++.h>
using namespace std;

void pattern6(int n) {
	for(int i = n; i > 0; i--) {
		for(int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		cout << "\n";
	}
}

int main() {
	int n;
	cin >> n;
	pattern6(n);
	return 0;
}

/*

Input:
5

Output:
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 

*/