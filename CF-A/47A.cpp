/**
 *	author: lucasfcm9
 * 	created: 01.20.2020 06:49:05 PM
**/
#include <bits/stdc++.h>

using namespace std;

const int MAX { 500 };
bitset<MAX> bs;

int main () {

	int N;
	cin >> N;
	for(int i = 1; ((i * (i + 1)) / 2) <= MAX; i++) {
		bs[((i * (i + 1)) / 2)] = true;
	}

		cout << (bs[N] ? "YES" : "NO");
	return 0;
}
