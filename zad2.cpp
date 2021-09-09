#include <bits/stdc++.h>
using namespace std;

int qpow(int x, int y) {
    int res = 1;
    while (y > 0) {
        if (y & 1)
            res = res * x;
        y = y >> 1; 
        x = x * x; 
    }
    return res;
}

int calc(int n) {	
	int s = 0;
	int b = n;
	int z = 0;
	while ( b > 0 ) {
		s += (b % 10)*qpow((3),z);
		b /= 10;
		z++;
	}
	return s;
}

int main() {
  int num =0;
	cout << "Podaj liczbe \n";
	cin >> num;
	cout << calc(num) << "\n";
}