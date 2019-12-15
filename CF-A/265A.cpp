#include <bits/stdc++.h>
using namespace std;
inline void FAST_IO() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

int main()
{	
	FAST_IO();
	string s,p;
	cin>>s>>p;
	int l=0,r=0;
	while(r<p.size()){
		if(p[r]!=s[l]){
			r++;
		} else{
			r++; l++;
		}
	}
	cout<<l+1<<endl;
	return 0;
}

