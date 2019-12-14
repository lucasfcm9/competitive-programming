#include <bits/stdc++.h>
using namespace std;
inline void FAST_IO() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

int ans;

int main()
{	
	FAST_IO();
	int a,b;
	cin>>a>>b;
	
	while(a<=b){
		a*=3; b*=2;
		++ans;
	}
	cout<<ans<<endl;
	return 0;
}

