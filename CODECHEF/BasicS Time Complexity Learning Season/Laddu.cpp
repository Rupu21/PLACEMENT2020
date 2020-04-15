#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string origin;
		cin>>origin;
		int ans=0;
		string activity;
		while(n--){
			cin>>activity;
			if(activity=="TOP_CONTRIBUTOR")
				ans+=300;
			else if(activity=="CONTEST_HOSTED")
				ans+=50;
			else if(activity=="CONTEST_WON"){
				int rank;
				cin>>rank;
				if(rank<=20)
					ans+=300+(20-rank);
				else
					ans+=300;
			}
			else{
				int number;
				cin>>number;
				ans+=number;
			}
		}
		if(origin=="INDIAN")
			cout<<(ans/200)<<endl;
		else
			cout<<(ans/400)<<endl;
	}
}