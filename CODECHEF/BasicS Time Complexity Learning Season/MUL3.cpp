#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int k;
		long long int d0,d1;
		cin>>k;
		cin>>d0>>d1;
		long long int sum;
		long long int temp=(d0+d1);
		long long int repeat=(2*temp) % 10 + (4*temp) % 10 + (8*temp) % 10 + (6*temp) % 10;
		sum=temp;
		k=k-2;
		if(k > 0) {
		    sum += (temp % 10);
		    k--;
	    }
	    sum+=(k/4)*repeat;
	    k=k%4;
	    int temp2=2;
	    while(k--){
	    	sum += (temp2*temp) % 10;
		    temp2 = (temp2 * 2) % 10;
		}
		if(sum%3==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}