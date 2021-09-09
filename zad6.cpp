#include <bits/stdc++.h>
using namespace std;

void sito(bool *tab, unsigned int n)
{
	for ( int i = 0; i<n; i++ ) tab[i] = false;
	for (int i=2; i*i<=n; i++) 
    {
      if(!tab[i])
				for (int j = i*i ; j<=n; j+=i)
          tab[j] = 1;
    }
}

int main() {
  int n;
	cout << "podaj n: ";
	cin >> n;
	cout << "\n";
	bool t[n+1];
	sito(t, (unsigned)n+1);
	for ( int i = 2; i<n+1; i++ ) {
		if ( i >= n-1 ) continue;
		if ( !t[i] && !t[i+2] ) 
			cout << i << " & " << i+2 << "\n";
	}
}