#include <bits/stdc++.h>
using namespace std;
inline void FAST_IO() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

int main()
{	
	FAST_IO();
	string s;
	cin>>s;
	auto fst='a';
	auto tmp=0,soma=0,res=0;
	for(int i=0;i<int(s.size());i++){
		soma+=abs(s[i]-fst);
		if(soma>13){
			tmp=26-soma;
			res+=tmp;
		}else
			res+=soma;
		fst=s[i];
		tmp=soma=0;
	}
	cout<<res<<endl;
	return 0;
}

