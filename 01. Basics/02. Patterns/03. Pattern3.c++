#include<bits/stdc++.h>
using namespace std;

void pattern3(int n) {
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i; j++) {
			cout << j << " ";
		}
		cout << "\n";
	}
}

int main() {
	int n;
	cin >> n;
	pattern3(n);
	return 0;
}

/*

Input:
5

Output:
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

*/