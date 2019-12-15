#include <bits/stdc++.h>
using namespace std;
inline void FAST_IO() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

vector<int>vi;

int main()
{	
	FAST_IO();
	int y,w;
	cin>>y>>w;
	auto h=0;
	h=(y>w?y:w);
	for(int i=h;i<=6;i++)
		vi.push_back(i);
	auto s=vi.size()/6.0;
	map<double,string>mp;
	mp[0/1.0] = "0/1";
	mp[1/1.0] = "1/1";
	mp[1/2.0] = "1/2";
	mp[1/3.0] = "1/3";
	mp[1/4.0] = "1/4";
	mp[1/5.0] = "1/5";
	mp[1/6.0] = "1/6";
	mp[5/6.0] = "5/6";
	mp[2/6.0] = "1/3";
	mp[3/6.0] = "1/2";
	mp[6/6.0] = "1/1";
	mp[4/6.0] = "2/3";
	cout<<mp[s]<<endl;
	return 0;
}

