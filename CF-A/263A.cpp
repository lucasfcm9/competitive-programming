#include <bits/stdc++.h>
using namespace std;
inline void FAST_IO() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

int main()
{	
	FAST_IO();
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			int x;
			cin>>x;
			if(x==1){
				cout<<abs(i-3)+abs(j-3)<<endl;
			}
		}
	}	
	return 0;
}

