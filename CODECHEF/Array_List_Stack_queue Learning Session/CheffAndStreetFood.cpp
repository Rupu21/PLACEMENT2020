#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long int max=0,temp;
		cin>>n;
		int S[n],P[n],V[n];
		for(int i=0;i<n;i++){
			cin>>S[i];
			cin>>P[i];
			cin>>V[i];
			temp=P[i]/(S[i]+1)*V[i];
			if(max<temp)
				max=temp;
		}
		cout<<max<<endl;
	}
	return 0;
} 