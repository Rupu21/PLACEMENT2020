#include<iostream>
using namespace std;
int main(){
	int n,password;
	cin>>n>>password;
	int k=1;
	if(password%5000==0){
		if((password/5000)<=n){
			cout<<(password/5000)<<endl;
			return 0;
		}
	}
	for(int i=1;i<49;i++){
		password-=(5000+i);
		//cout<<password<<endl;
		if(password<5000)
			break;
		if(password%5000==0){
			if((password/5000)<=n){
				cout<<(password/5000)<<endl;
				return 0;
			}
		}
	}
	cout<<"Doesnot Exist"<<endl;
}
