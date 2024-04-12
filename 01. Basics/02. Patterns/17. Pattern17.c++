#include<bits/stdc++.h>
using namespace std;

void pattern17(int n) {
	for(int i = 0; i < n; i++) {
		// spaces
		for(int j = 0; j < (n-1-i); j++) {
			cout << " ";
		}

		// characters
		char ch = 'A';
		for(int j = 0; j < (2*i+1); j++) {
			cout << ch;
			if(j < i) ch++;
			else ch--;
		}

		// spaces
		for(int j = 0; j < (n-1-i); j++) {
			cout << " ";
		}
		cout << "\n";
	}
}

int main() {
	int n;
	cin >> n;
	pattern17(n);
	return 0;
}

/*

Input:
5

Output:
    A    
   ABA   
  ABCBA  
 ABCDCBA 
ABCDEDCBA

*/