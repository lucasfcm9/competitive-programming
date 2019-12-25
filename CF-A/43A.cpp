#include<bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin>>n;
	map<string,int>mp;
	while(n--){
		string s;
		cin>>s;
		mp[s]++;
	}

	string r;
	int maior=INT_MIN;
	for(auto [k,v]:mp){

		if(v>maior){
			maior=v;
			r=k;
		}
	}
	cout<<r<<endl;
	return 0;
}
