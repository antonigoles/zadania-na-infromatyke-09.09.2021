#include <bits/stdc++.h>
using namespace std;
int main() {
  unordered_map<char, bool> cs = {
		{'a', true}, {'e', true},
		{'i', true}, {'o', true},
		{'u', true}, {'y', true},
	};
	string str;
	cout << "Podaj tekst: \n";
	getline(cin, str);
	for ( auto c : str ) {
		if ( cs[c] ) cout << c;
	}
	cout << "\n";

}