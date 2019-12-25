#include <bits/stdc++.h>

using namespace std;
bool color;
int main() {

	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char a;
			cin>>a;
			if(a=='C' or a=='M' or a=='Y')
				color=true;
		}
	}
	cout<<(color?"#Color" : "#Black&White")<<endl;
	return 0;
}
