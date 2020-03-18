#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int flag=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>7 || a[i]<1)
				flag=1;
		}
		if(flag==1){
			cout<<"no"<<endl;
			continue;
		}
		int i=0,j=n-1,k=1,current=k;
		while(i<=j){
			switch(current){
				case 1:
					if(a[i]==1 && a[j]==1){
						i++;j--;
					}
					else
						flag=1;
					break;
				case 2:
					if(a[i]==2 && a[j]==2){
						i++;j--;
					}
					else
						flag=1;
					break;
				case 3:
					if(a[i]==3 && a[j]==3){
						i++;j--;
					}
					else
						flag=1;
					break;
				case 4:
					if(a[i]==4 && a[j]==4){
						i++;j--;
					}
					else
						flag=1;
					break;
				case 5:
					if(a[i]==5 && a[j]==5){
						i++;j--;
					}
					else
						flag=1;
					break;
				case 6:
					if(a[i]==6 && a[j]==6){
						i++;j--;
					}
					else
						flag=1;
					break;
				case 7:
					if(a[i]==7 && a[j]==7){
						i++;j--;
					}
					else
						flag=1;
					break;
			}
			if(a[i]!=current)
				current++;
			if(flag==1)
				break;
		}
		if(flag==1)
			cout<<"no"<<endl;
		else
			cout<<"yes"<<endl;
	}
}
