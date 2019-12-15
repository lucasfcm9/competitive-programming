#include <bits/stdc++.h>
using namespace std;
inline void FAST_IO() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

int ans;
int main()
{	
	FAST_IO();
	int n,t,k,d;
	cin>>n>>t>>k>>d;
	//4 cakes in 6 minutes. 8 cakes in 12 minutes;
	auto tmp=k;
	auto aux=t;
	while(tmp<n){
		aux+=t;
		tmp+=k;
	}
	cout<<((d+t>=aux)?"NO":"YES")<<endl;
	
	return 0;
}

