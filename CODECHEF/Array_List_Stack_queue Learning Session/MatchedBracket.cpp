#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long int depth=0,depth_index=0,total=0,total_index=0;
	long long int sum=0;
	long long int pair_count=0;
	long long int i=0;
	while(i<n){
		int d;
		cin>>d;
		pair_count++;
		if(d==1)
			sum++;
		else{
			if(depth<sum){
				depth=sum;
				depth_index=i;
			}
			sum--;
			if(sum==0){
				if(total<pair_count){
					total=pair_count;
					total_index=i-pair_count+2;
				}
				pair_count=0;
			}
		}
		i++;
	}
	cout<<depth<<" "<<depth_index<<" "<<total<<" "<<total_index<<endl;
	return 0;
}