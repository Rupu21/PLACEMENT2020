#include<iostream>
using namespace std;
void rotate(int a[],int start,int end){
	int temp=a[end];
	int i=0;
	for(i=end;i>start;i--){
		a[i]=a[i-1];
	}
	a[i]=temp;	
}
void arrange(int a[],int n){
	int i,j,k,left=0,right=left+1;
	for(i=0;i<n;i++){
		right=left+1;
		int flag=0,check=0;
		if(i%2==0){
			if(a[left]<0){
				check=1;
				left++;
			}
			else{
				while(right<n){
					if(a[right]<0){
						int t=a[left];
						a[left]=a[right];
						a[right]=t;
						check=1;
						if(flag==1)
							rotate(a,left+1,right);
						break;
					}
					else{
						right++;
						flag=1;
					} 
				}
			}
		}
		else if(i%2!=0){
				if(a[left]>0){
					left++;
					check=1;
				}
				else{
				while(right<n){
					if(a[right]>0){
						int t=a[left];
						a[left]=a[right];
						a[right]=t;
						check=1;
						if(flag==1)
							rotate(a,left+1,right);
						break;
					}
					else{
						right++;
						flag=1;
					} 
				}
				}
		}
		if(check==0){
				break;
		}
		check=0;
		left=i+1;
	}	
}
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	arrange(a,n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
}
