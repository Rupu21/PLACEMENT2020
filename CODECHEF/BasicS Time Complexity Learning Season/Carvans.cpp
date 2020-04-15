#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int ans=1;
		long long int arr[n];
		for(long long int i=0;i<n;i++)
			cin>>arr[i];
		for(long long int i=0;i<n-1;i++){
			if(arr[i]<arr[i+1])
				arr[i+1]=arr[i];
			else
				ans+=1;
		}
		cout<<ans<<endl;
	}
	return 0;
}