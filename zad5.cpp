#include <bits/stdc++.h>
using namespace std;

long long int fib(long long int n) { 
	return n <= 1 ? n : fib(n-1)+fib(n-2);
}

int main() {
  int opt=0;
	long long int n=0;
	cout << "Wybierz 1 lub 2: \n";
	cin >> opt;
	cout << "Wpisz n: \n";
	cin >> n;
	if ( opt == 2 ) {
		for(int i = 0; i<=n; i++) {
			cout << fib(i) << "\n";
		}
	} else {
		cout << fib(n) << "\n";
	}
}