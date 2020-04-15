#include<iostream>
using namespace std;
void reverse(int arr[],int l,int r){
	while(l<r){
		int t=arr[l];
		arr[l]=arr[r];
		arr[r]=t;
		l++;
		r--;
	}
}
void rotate_clockwise(int arr[],int n,int d){
	reverse(arr,0,n-d-1);
	reverse(arr,n-d,n-1);
	reverse(arr,0,n-1);
}
void rotate_anticlockwise(int arr[],int n,int d){
	reverse(arr,0,d-1);
	reverse(arr,d,n-1);
	reverse(arr,0,n-1);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i];
	int k;
	cout<<endl<<"Enter rotate";
	cin>>k;
	rotate_clockwise(arr,n,k%n);
		cout<<"CLOCK WISE"<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i];
	rotate_anticlockwise(arr,n,k%n);
		cout<<"\nANTICLOCKWISE"<<endl;
	for(int i=0;i<n;i++)
		cout<<arr[i];
	return 0;
}
