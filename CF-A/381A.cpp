#include <bits/stdc++.h>
using namespace std;
inline void FAST_IO() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

int main()
{	
	FAST_IO();
	int n;
	cin>>n;
	vector<int>vi;
	while(n--){
		int x; cin>>x; vi.push_back(x);
	}
	bool ser=true;
	int l=0;
	int r=vi.size()-1;
	auto s=0,p=0;
	while(l<=r){
		if(vi[l]>=vi[r]){
			(ser ? s+=vi[l] : p+=vi[l]);
			l++;
		} else{
			(ser ? s+=vi[r] : p+=vi[r]);
			r--;
		}
		(ser ? ser=false : ser=true);
	}
	cout<<s<<' '<<p<<endl;
	return 0;
}

