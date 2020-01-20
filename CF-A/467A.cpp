/**
 *	author: lucasfcm9
 * 	created: 01.20.2020 05:51:32 PM
**/
#include <bits/stdc++.h>

using namespace std;

int s;

int main () {

	int N;
	cin >> N;
	while(N--) {
		int a, b;
		cin >> a >> b;

		if(b - a >= 2) {
			s += 1;
		}
	}
	cout << s;
	return 0;
}
