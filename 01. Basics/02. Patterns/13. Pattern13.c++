#include<bits/stdc++.h>
using namespace std;

void pattern13(int n) {
	int num = 1;

	for(int i = 0; i < n; i++) {
		for(int j = 0; j <= i; j++) {
			cout << num << " ";
			num = num + 1;
		}
		cout << "\n";
	}
}

int main() {
	int n;
	cin >> n;
	pattern13(n);
	return 0;
}

/*

Input:
5

Output:
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/