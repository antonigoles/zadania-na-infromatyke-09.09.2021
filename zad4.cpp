#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str) {
		int sz = str.size();
		bool check = true;
		for ( int i = 0; i<sz/2; i++ ) {
			if ( str[i] != str[sz-i-1] ) check = false; 
		}
		return check;
}


int main() {
	vector<string> strtab;
	string s;
	cout << "Podaj tekst: \n";
	getline(cin, s);
	string c_;
	for ( int i = 0; i<s.size(); i++ ) {
		char c = s[i];
		if ( c == ' ' ) {
			if ( isPalindrome(c_) ) cout << c_ << "\n";
			c_ = "";
		} 
		else c_ += c;
	} 
	if ( c_ != " " && isPalindrome(c_) ) cout << c_ << "\n";
	cout << "\n";

}