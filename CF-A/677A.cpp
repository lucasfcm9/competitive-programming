#include <bits/stdc++.h>
using namespace std;
inline void FAST_IO() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

int ans;

int main()
{	
	FAST_IO();
	int n,h;
	cin>>n>>h;
	
	while(n--){
		int x;
		cin>>x;
		ans += (x<=h ? 1 : 2);
	}
	cout<<ans<<endl;
	return 0;
}

