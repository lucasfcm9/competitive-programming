#include <bits/stdc++.h>
using namespace std;
inline void FAST_IO() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

int main()
{	
	FAST_IO();
	int k,r;
	cin>>k>>r;

	int tmp=k;
	int i=1,ans=0;
	if((k-r)%10==0){
		cout<<1<<endl;
		return 0;
	}
	while(((tmp-r)%10)!=0){
		tmp=k*i;
		ans++;
		if((tmp*i)%10==0)
			break;
		i++;
	}
	cout<<ans<<endl;
	return 0;
}

