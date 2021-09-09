#include <iostream>
using namespace std;

bool find2(int n) {
	bool check = false;
	for ( int i = 2; i < (n+1)/2; i++ ) {
		if ( n % i == 0 ) check = true; 
	}
	return !check;
}



bool find1(int n) {
	int s = 0;
	int b = n;
	while ( b > 0 ) {
		s += b % 10;
		b = b / 10;
	}
	return find2(s);
}



int main() {
  int num;
	cout << "Podaj liczbe" << "\n";
	cin >> num;
	if ( find2(num) && find1(num) ) 
		cout << "Tak \n";
	else 
		cout << "Nie \n";
}