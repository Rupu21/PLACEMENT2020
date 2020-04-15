#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		map<char,int> str;
		for(int i=0;i<s.length();i++){
			if(i<(s.length()/2)){
				if(str.find(s.at(i))==str.end()){
					str[s.at(i)]=1;
				}
				else
					str[s.at(i)]+=1;
			}
			else{
				if(str.find(s.at(i))==str.end()){
					break;
				}
				else{
					str[s.at(i)]-=1;
					if(str[s.at(i)]==0){
						str.erase(s.at(i));
						
					}
				}		
			}
			if(s.length()%2 !=0 && i==(s.length()/2)-1)
				i++;
		}
		if(str.size()==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
