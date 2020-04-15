#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long int n;
		cin>>n;
		long int ans;
		int A=0,B=0;
		int A_chance=n,B_chance=n;
		long int k=(2*n);
		string s;
		cin>>s;
		for(long int i=0;i<=(2*n);i++){
			if(i%2==0){
			    A_chance--;
			    if(s.at(i)=='1')
			        A++;
			}
			else if(i%2!=0){
			    B_chance--;
			    if(s.at(i)=='1')
			        B++;
			}
			if((A-B)>B_chance){
			     cout<<i+1<<endl;
			     break;
			}
			else if((B-A)>A_chance){
			    cout<<i+1<<endl;
			    break;
			}
			 else if(i==(2*n)-1 && A==B){
			     cout<<i+1<<endl;
			     break;
			 }
		}
	}
	return 0;
}