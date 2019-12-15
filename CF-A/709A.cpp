#include <bits/stdc++.h>
using namespace std;
inline void FAST_IO() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

int ans,soma;

int main()
{	
	FAST_IO();
	int n,b,d;
	cin>>n>>b>>d;
	while(n--){
		int x;
		cin>>x;

		if(x>b)
			continue;
		else{
			soma+=x;
			if(soma>d){
				++ans;
				soma=0;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}

