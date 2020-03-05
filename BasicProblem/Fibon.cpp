#include<iostream>
using namespace std;
int main(){
	cout<<"Enter range"<<endl;
	int n;
	cin>>n;
	int a=0,b=1,c=0;
	cout<<a<<" "<<b<<" ";
	for(int i=0;i<n;i++){
		c=a+b;
		if(c<=n)
			cout<<c<<" ";
		a=b;
		b=c;
		i=c;
	}
	return 0;
}
