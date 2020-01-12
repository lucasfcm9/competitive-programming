#include <bits/stdc++.h>

using namespace std;

vector<pair<int, int> > vp;

int main () {

	int n;
	bool maybe = false;
	cin >> n;
	while(n--) {
		int r, p;
		cin >> r >> p;
		vp.push_back({ r, p });
	}

	for(int i = 0; i < vp.size(); i++) {
		if(vp[i].first != vp[i].second) {
			cout << "rated" << endl;
			return 0;
		}
	}
	for(int i = 0; i < vp.size() - 1; i++) {
		if(vp[i].first >= vp[i+1].first && vp[i].second >= vp[i+1].second) {
			maybe = true;
		}

		else {
			maybe = false;
			break;
		}
	}

	if(maybe) {
		cout << "maybe" << endl;
	} else {
		cout << "unrated" << endl;
	}
	return 0;
}
