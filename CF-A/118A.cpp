/**
 *	author: lucasfcm9
 * 	created: 01.20.2020 05:35:46 PM
**/
#include <bits/stdc++.h>

using namespace std;

int main () {

	string s;
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
		continue;
		else {
			cout << "." << s[i];
		}
	}
	cout << '\n';
	return 0;
}
