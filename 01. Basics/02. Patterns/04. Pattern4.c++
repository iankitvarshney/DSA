#include<bits/stdc++.h>
using namespace std;

void pattern4(int n) {
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= i; j++) {
			cout << i << " ";
		}
		cout << "\n";
	}
}

int main() {
	int n;
	cin >> n;
	pattern4(n);
	return 0;
}

/*

Input:
5

Output:
1 
2 2 
3 3 3 
4 4 4 4 
5 5 5 5 5 

*/