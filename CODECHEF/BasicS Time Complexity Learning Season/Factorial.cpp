#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int ans;
		ans=n/5;
		int k=2;
		long long int p=pow(5,k);
		while(p<=n){
			ans+=(n/p);
			k++;
			p=pow(5,k);
		}
		cout<<ans<<endl;
	}
	return 0;
}