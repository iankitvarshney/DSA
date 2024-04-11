#include<bits/stdc++.h>
using namespace std;

void pattern5(int n) {
	for(int i = n; i > 0; i--) {
		for(int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << "\n";
	}
}

int main() {
	int n;
	cin >> n;
	pattern5(n);
	return 0;
}

/*

Input:
5

Output:
* * * * * 
* * * * 
* * * 
* * 
* 

*/