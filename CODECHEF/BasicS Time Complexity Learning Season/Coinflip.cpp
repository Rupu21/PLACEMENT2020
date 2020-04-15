#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int g;
		cin>>g;
		while(g--){
			int i;
			long long int n;
			int q;
			cin>>i;
			cin>>n;
			cin>>q;
			long long int ans=0;
			if(n % 2 == 0)
				ans=n/2;
			else{
				if(q==i)
					ans=n/2;
				else
					ans=(n/2)+1;
			}
			cout<<ans<<endl;
		}
	}
}