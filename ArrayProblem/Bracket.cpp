#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int ans=0;
		stack<char> c;
		string s;
		cin>>s;
		for(int i=0;i<s.length();i++){
			if(s.at(i)=='<')
				c.push(s.at(i));
			else if(s.at(i)=='>'){
				if(c.size()==0)
					break;
				else{
					c.pop();
					temp+=2;
				}
			}
			if(c.size()==0)
			
		}
		cout<<ans<<endl;
	}
}
