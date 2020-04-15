#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int ans=0;
		stack<char> c;
		string s;
		cin>>s;
		for(long long int i=0;i<s.length();i++){
			if(s.at(i)=='<')
				c.push(s.at(i));
			else if(s.at(i)=='>'){
				if(c.size()==0)
					break;
				else{
					c.pop();
				}
			}
			if(c.size()==0)
			    ans=i+1;
		}
		cout<<ans<<endl;
	}
}