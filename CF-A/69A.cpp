/**
 *	author: lucasfcm9
 * 	created: 01.20.2020 05:28:40 PM
**/
#include <bits/stdc++.h>

using namespace std;

int a, b, c, x, y, z;

int main () {

	int N; 
	for(cin >> N; N--; x += a, y += b, z += c) {
		cin >> a >> b >> c;
	}
	cout << (x || y || z ? "NO" : "YES");
	return 0;
}
