#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int res=0;
		long long int n;
		cin>>n;
		long long int l;
		cin>>l;
		n--;
		long long int k=l;
		res+=k;
		while(n--){
			cin>>l;
			if(k>l)
				k=l;
			res+=k;
		}
		cout<<res<<endl;
	}
}