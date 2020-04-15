#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	vector<long long int> a(n);
	for(long long int i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	long long int max=0;
	for(long long int i=0;i<n;i++){
		long long int temp=a[i]*(n-i);
		if(temp>max)
			max=temp;
	}
	cout<<max<<endl;
	return 0;
}
