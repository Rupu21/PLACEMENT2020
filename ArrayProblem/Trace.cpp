#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	int x=1;
	while(t--){
		int n;
		cin>>n;
		int arr[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>arr[i][j];
			}
		}
		int k=0,r=0,c=0;
		for(int i=0;i<n;i++){
			k+=arr[i][i];
		}
		set<int> a;
		set<int> b;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				a.insert(arr[i][j]);
				b.insert(arr[j][i]);
			}
			if(a.size()!=n)
				r++;
			if(b.size()!=n)
				c++;
			a.clear();
			b.clear();
		}
		cout<<"Case #"<<x<<": "<<k<<" "<<r<<" "<<c<<endl;
		x++;
	}
	return 0;
}
