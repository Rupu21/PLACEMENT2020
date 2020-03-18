#include<iostream>
using namespace std;
void swap(int& a,int& b){
	int t=a;
	a=b;
	b=t;
}
int main(){
	int l;
	cin>>l;
	int arr[l][2];
	for(int i=0;i<l;i++){
		cin>>arr[i][0];
		cin>>arr[i][1];
	}
	for(int i=0;i<l;i++){
		for(int j=0;j<l-i-1;j++){
			if(arr[j][0]>arr[j+1][0]){
				swap(arr[j][0],arr[j+1][0]);
				swap(arr[j][1],arr[j+1][1]);
			}		
		}
	}
	int result=0;
	int left=0;
	for(int i=0;i<l;i++){
		if(i>0){
			if(arr[i][0]<arr[left][1] && arr[i][1]>arr[left][1]){
				result+=(arr[i][1]-arr[i-1][1]);
				left=i;
			}
		}
		else
			result+=(arr[i][1]-arr[i][0]);
	}
	cout<<result<<endl;
	
	
}

