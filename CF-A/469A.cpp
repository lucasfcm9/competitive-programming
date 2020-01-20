#include <bits/stdc++.h>

using namespace std;

int main () {

	int N;
	cin >> N; // N levels

	vector<int> ni;
	for(int i = 1; i <= N; i++)
		ni.push_back(i);
	int X;
	cin >> X;

	vector<int> xi(X);
	for(int i = 0; i < X; i++)
		cin >> xi[i];
	
	int Y;
	cin >> Y;

	vector<int> yi(Y);
	for(int i = 0; i < Y; i++)
		cin >> yi[i];

	if(yi.size() == 0 and xi.size() == 0) {
		cout << "Oh, my keyboard!" << endl;
		return 0;
	}

	set<int> sxy;

	for(auto x : xi)
		sxy.insert(x);

	for(auto y : yi)
		sxy.insert(y);

	
	xi.clear();
	for(auto i : sxy) {

		xi.push_back(i);
	}

	bool p = true;

	for(int i = 0; i < ni.size() - 1; i++) {
		if(ni[i+1] != xi[i+1]) {
			p = false;
			break;
		}
	}
	cout << (p ? "I become the guy." : "Oh, my keyboard!") << endl;
	return 0;
}
