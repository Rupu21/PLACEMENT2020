#include<iostream>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int* createArray(int n){
	int * arr;
	arr=(int *)calloc(n,sizeof(int));
	cout<<"Enter array elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	return arr;
}
void showArray(int *arr,int n){
	cout<<endl<<"Array elements are: "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
void insertArray(int *arr,int index,int n,int data){
	arr=(int *)realloc(arr,(n+1)*sizeof(int));
	for(int i=n-1;i>=index;i--)
		arr[i+1]=arr[i];
	arr[index]=data;
	showArray(arr,n+1);
}
void deleteArray(int *arr,int n,int index){
	arr=(int *)realloc(arr,(n-1)*sizeof(int));
	for(int i=index;i<n;i++)
		arr[i]=arr[i+1];
	showArray(arr,n);
}
void updateArray(int *arr,int index,int data,int n){
	arr[index]=data;
	showArray(arr,n);
}
void findTriplet(int *arr,int n,int key=0){
	sort(arr,arr+n);
	int flag=0;
	cout<<endl<<"Triplets with sum "<<key<<" are :"<<endl;
	for(int i=0;i<n;i++){
		int start=i,end=n-1,mid=i+1;
		if(i>0 && arr[i]==arr[i-1])
			continue;
		while(mid<end){
			if(end<n-1 && arr[end]==arr[end+1] )
				continue;
			if(arr[start]+arr[mid]+arr[end]==key){
				cout<<endl<<arr[start]<<" "<<arr[mid]<<" "<<arr[end]<<endl;
				flag=1;
				mid++;
				end--;
			}
			else if(arr[start]+arr[mid]+arr[end]<key)
				mid++;
			else
				end--;
		}
	}
	if(flag==0){
		cout<<"No element Present "<<endl;
	}
}
int find_min(int *arr,int n){
	int min=INT_MAX;
	for(int i=0;i<n-1;i++){
		if(abs(arr[i]-arr[i+1])<min)
			min=abs(arr[i]-arr[i+1]);
	}
	return min;
}
int find_max(int *arr,int n){
	int max=INT_MIN;
	for(int i=0;i<n-1;i++){
		if(abs(arr[i]-arr[i+1])>max)
			max=abs(arr[i]-arr[i+1]);
	}
	return max;
}
void swap(int& a,int& b){
	int t=a;
	a=b;
	b=t;
}
void wave_sort(int *arr,int n){
	int flag=0;
	for(int i=0;i<n-1;i++){
		if(i%2==0){
			if(arr[i+1]<=arr[i]){
				
				continue;
			}
			else{
				for(int j=i+2;j<n;j++){
					if(arr[j]<=arr[i]){
						flag=1;
						cout<<arr[i]<<" "<<arr[j]<<endl;
						swap(arr[i+1],arr[j]);
						break;
					}
				}
				if(flag==0){
					swap(arr[i],arr[i+1]);
				}
			}
		}
		else{
			if(arr[i+1]>=arr[i])
				continue;
			else{
				for(int j=i+2;j<n;j++){
					if(arr[j]>=arr[i]){
						flag=1;
						cout<<arr[i]<<" "<<arr[j]<<endl;
						swap(arr[i+1],arr[j]);
						break;
					}
				}
				if(flag==0){
					swap(arr[i],arr[i+1]);
				}
			}
		}
		flag=0;
	}
}
int main(){
	cout<<"Enter size of array"<<endl;
	int n;
	cin>>n;
	int *a=createArray(n);
	showArray(a,n);
	cout<<"\nEnter 1 for Insertion\n 2 for deletion\n 3 for updation \n 4 for Find all triplets with given value\n 5 for Minimum Distance between two numbers \n 6 for Minimum Distance between two numbers \n";
	cout<<" 7 for  Sort in Wave Form \n 8 for Exit\n ";
	int choice;
	cin>>choice;
	while(1){
	switch(choice){
			int index;
			int data;
			int d;
			case 1: 
				cout<<"This is insertion"<<endl;
				cout<<"enter index  ";
				cin>>index;
				cout<<"enter data ";
				cin>>data;
				insertArray(a,index,n,data);
				break;
			case 2:
				cout<<"This is Deletion"<<endl;
				cout<<"enter index  ";
				cin>>index;
				deleteArray(a,n,index);
				break;
			case 3:
				cout<<"This is updation"<<endl;
				cout<<"enter index  ";
				cin>>index;
				cout<<"enter data ";
				cin>>data;
				updateArray(a,index,data,n);
				break;
			case 4:
				cout<<"Enter value of which triplet sum u want"<<endl;
				int key;
				cin>>key;
				findTriplet(a,n,key);
				break;
			case 5:
				cout<<"This is minimum distance between two points"<<endl;
				cout<<"Minimum Distance: "<<find_min(a,n);
				break;
			case 6:
				cout<<"This is maximum distance between two points"<<endl;
				cout<<"Maximum Distance: "<<find_max(a,n);
				break;
			case 7:
				cout<<"This is sorting array in wave forms"<<endl;
				wave_sort(a,n);
				showArray(a,n);
				break;
			case 8:
				choice=0;
				break;
		}
		if(choice==0)
			break;
		else{
			cout<<"\nEnter 1 for Insertion\n 2 for deletion\n 3 for updation \n 4 for Find all triplets with given value\n 5 for Minimum Distance between two numbers \n 6 for Minimum Distance between two numbers \n";
			cout<<" 7 for  Sort in Wave Form \n 8 for exit\n";
			cin>>choice;
		}
	}
	return 0;
}

