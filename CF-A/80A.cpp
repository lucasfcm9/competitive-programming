#include<bits/stdc++.h>

using namespace std;

bool prime(int n){

    if(n==2) return true;
    if(n<2 or !(n&1)) return false;
    for(int i=3;i*i<=n;i+=2){

        if(!(n%i))
            return false;
    }
    return true;
}

int next(int n){

    for(n++;!prime(n);n++);
    return n;
}

int main(){

    int a,b;
    cin>>a>>b;
    if(next(a)==b){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
