#include<iostream>
#include<bits/stdc++.h>
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
void reversalAlgo(int *arr,int start,int end){
	while(start<end){
		int t=arr[start];
		arr[start]=arr[end];
		arr[end]=t;
		start++;
		end--;
	}
}
void rotationClockwise(int *arr,int n,int numberOfRotate){
	if(numberOfRotate==0)
		return;
	reversalAlgo(arr,0,numberOfRotate-1);
	reversalAlgo(arr,numberOfRotate,n-1);
	reversalAlgo(arr,0,n-1);
	showArray(arr,n);
}
void rotationAntiClockWise(int *arr,int n,int numberOfRotate){
		if(numberOfRotate==0)
		return;
	reversalAlgo(arr,0,n-numberOfRotate-1);
	reversalAlgo(arr,n-numberOfRotate,n-1);
	reversalAlgo(arr,0,n-1);
	showArray(arr,n);
}
void swap(int& a,int& b){
	int t=a;
	a=b;
	b=t;
}
void moveOddtoEnd(int *arr,int n){
	int start=-1,end=n;
	while(start<end){
		while(arr[++start]%2==0);
		while(arr[--end]%2!=0);
		if(start<end){
			swap(arr[start],arr[end]);
		}		
	}
	showArray(arr,n);
} 
void moveOddtoBegin(int *arr,int n){
	int start=-1,end=n;
	while(start<end){
		while(arr[++start]%2!=0);
		while(arr[--end]%2==0);
		if(start<end){
			swap(arr[start],arr[end]);
		}		
	}
	showArray(arr,n);
} 
void moveEventoBegin(int *arr,int n){
	int start=-1,end=n;
	while(start<end){
		while(arr[++start]%2==0);
		while(arr[--end]%2!=0);
		if(start<end){
			swap(arr[start],arr[end]);
		}		
	}
	showArray(arr,n);
} 
void moveEventoEnd(int *arr,int n){
	int start=-1,end=n;
	while(start<end){
		while(arr[++start]%2!=0);
		while(arr[--end]%2==0);
		if(start<end){
			swap(arr[start],arr[end]);
		}		
	}
	showArray(arr,n);
} 
void findLargest(int *arr,int n){
	int large=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>large)
			large=arr[i];
	}
	cout<<"Largest element : "<<large<<endl;
}
void findSmallest(int *arr,int n){
	int small=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]<small)
			small=arr[i];
	}
	cout<<"Smallest element : "<<small<<endl;
}
void findSum(int *arr,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	cout<<"Total Sum : "<<sum<<endl;
}
void findMean(int *arr,int n){
	int sum=0;
	double mean=0.0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	mean=(double)sum/n;
	cout<<"Mean : "<<mean<<endl;
}

void findMedian(int *a,int n){
	int b[n];
	for(int i=0;i<n;i++)
		b[i]=a[i];
	sort(b,b+n);
	cout<<"Median is : "<<b[n/2];
}
int mostFrequent(int a[], int n) 
{ 
	int arr[n];
	for(int i=0;i<n;i++)
		arr[i]=a[i];
    // Sort the array 
    sort(arr, arr + n); 
  
    // find the max frequency using linear traversal 
    int max_count = 1, res = arr[0], curr_count = 1; 
    for (int i = 1; i < n; i++) { 
        if (arr[i] == arr[i - 1]) 
            curr_count++; 
        else { 
            if (curr_count > max_count) { 
                max_count = curr_count; 
                res = arr[i - 1]; 
            } 
            curr_count = 1; 
        } 
    } 
  
    // If last element is most frequent 
    if (curr_count > max_count) 
    { 
        max_count = curr_count; 
        res = arr[n - 1]; 
    } 
  
    return res; 
}  
void findMode(int *arr,int n){
	cout<<"Mode is :"<<mostFrequent(arr,n)<<endl;
}
int main(){
	cout<<"Enter size of array"<<endl;
	int n;
	cin>>n;
	int *a=createArray(n);
	showArray(a,n);
	cout<<"\nEnter 1 for Insertion\n 2 for deletion\n 3 for updation \n 4 for rotating clockwise\n 5 for rotating anti-clockwise \n 6 for move all odd elements to end \n";
	cout<<" 7 for  move all odd elements to begin \n 8  for move all even elements to end\n 9  for move all even elements to begin \n";
	cout<<" 10 for finding largest element and smallest elemnt \n 11 for find mean,median,mode \n 12 for exit:"<<endl;
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
				cout<<"This is Rotating clockwise";
				cout<<"Enter how many rotaion you want?"<<endl;
				cin>>d;
				rotationClockwise(a,n,d);
				break;
			case 5:
				cout<<"This is Rotating Anti-clockwise";
				cout<<"Enter how many rotaion you want?"<<endl;
				cin>>d;
				rotationAntiClockWise(a,n,d);
				break;
			case 6:
				cout<<"This is moving all odd elements to end"<<endl;
				moveOddtoEnd(a,n);
				break;
			case 7:
				cout<<"This is moving all odd elements to begin"<<endl;
				moveOddtoBegin(a,n);
				break;
			case 8:
				cout<<"This is moving all even elements to end"<<endl;
				moveEventoEnd(a,n);
				break;
			case 9:
				cout<<"This is moving all even elements to begin"<<endl;
				moveEventoBegin(a,n);
				break;
			case 10:
				findLargest(a,n);
				findSmallest(a,n);
				break;
			case 11:
				findMedian(a,n);
				findMode(a,n);
				findMean(a,n);
				break;
			case 12:
				choice=0;
				break;
		}
		if(choice==0)
			break;
		else{
			cout<<"\nEnter again: \n"<<endl;
			cout<<"\nEnter 1 for Insertion\n 2 for deletion\n 3 for updation \n 4 for rotating clockwise\n 5 for rotating anti-clockwise \n 6 for move all odd elements to end \n";
	cout<<" 7 for  move all odd elements to begin \n 8  for move all even elements to end\n 9  for move all even elements to begin \n";
	cout<<" 10 for finding largest element and smallest elemnt \n 11 for find mean,median,mode \n 12 for exit:"<<endl;
			cin>>choice;
		}
	}
	return 0;
}

