/*In competitive programming you can not compit without STL if you are using C++
	This is like a container which holds data in an efficient manner
	Vector is sequential and most usuable and very much similar to array
	Iterator is just like a pointer
	*/
#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
void my_insert(vector<int> &a,int x){
	a.push_back(x);
}
void array_style_display(vector<int> a){
	cout<<"\nPresent Elements are: "<<" ";
	for(int i=0;i<a.size();i++)
		cout<<a[i]<<" ";
}
void with_iterator_display(vector<int> a){
	cout<<"\nPresent Elements are: "<<" ";
	vector<int>::iterator it;
	for(it=a.begin();it<a.end();it++)
		cout<<(*it)<<" ";
}
void index_value(vector<int> a,int index){
	if(index>=a.size()){
		cout<<"Not found"<<endl;
		return;
	}
	cout<<"Index "<<index<<" value: "<<a.at(index)<<endl;
}
void back_front(vector<int> a){
	cout<<"Front  value: "<<a.front()<<endl;
	cout<<"Back  value: "<<a.back()<<endl;
}
void delete_last(vector<int> a){
	cout<<"Deleted element : "<<a.back();
	a.pop_back();
	array_style_display(a);
}
void check_empty(vector<int> a){
	if(a.empty())  
    	cout<<"Vector a is empty";  
    else  
    	cout<<"Vector a is not empty";  
}
void insert_after_element(vector<int> &a){
	vector<int>::iterator it;
	array_style_display(a);
	it=a.begin();
	cout<<"\nEnter element "<<endl;
	int k;
	cin>>k;
	while(it<a.end()){
		if((*it)==k)
			break;
		it++;
	}
	if(it==a.end()){
		cout<<"\n Element not found , append new element "<<endl;
		it--;
	}
	a.insert(it+1,2,10);
	
}
void remove_element(vector<int> &a,int start,int end){
	vector<int> ::iterator it=a.begin();
	a.erase(it+start,it+end);
	array_style_display(a);
}
void assigning_new(vector<int> b){
	vector<int> a;
	a.assign(5,6);
	array_style_display(a);
	a.assign(b.begin()+1,b.end());
	array_style_display(a);
}
void copy_vector(vector<int> a){
	vector<int> b;
	b.operator=(a);
	array_style_display(b);
}
void vector_to_array(vector<int> a){
	int *p=a.data();
	for(int i=0;i<a.size();i++)
		cout<<p[i]<<" ";
}
void display_element(vector<vector<int> > a ,int r,int c){
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
void insert_element(vector<vector<int> > &a ,int r,int c){
	vector<int>column;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout<<"Enter "<<i<<" th row "<<j<<" th column element: ";
			int data;
			cin>>data;
			column.push_back(data);
		}
		a.push_back(column);
		column.clear();
	}
	cout<<endl;
}

int main(){
	vector<int> arr;
	cout<<"\nInsertion of element through push_back()"<<endl;
	my_insert(arr,3);
	int n;
	cout<<"\nEnter element: ";
	cin>>n;
	arr.push_back(n);
	cout<<"\nVector Display like array";
	array_style_display(arr);
	cout<<"\nVector display using iterator";
	with_iterator_display(arr);
	cout<<"\nDisplay first and last element of vector"<<endl;
	back_front(arr);
	cout<<"\nDisplay value of specific index"<<endl;
	cout<<"Enter index"<<endl;
	int k;
	cin>>k;
	index_value(arr,k);
	cout<<"\nDelete last eleemnt"<<endl;
	delete_last(arr);
	cout<<"\nInsertion after an element"<<endl;
	insert_after_element(arr);
	array_style_display(arr);
	cout<<"\nDeletion of elemnt in range"<<endl;
	remove_element(arr,1,2);
	cout<<"\nAssigning new element to vector"<<endl;
	assigning_new(arr);
	cout<<"\nCopy of vector"<<endl;
	copy_vector(arr);
	cout<<"\nVector to array "<<endl;
	vector_to_array(arr);
	cout<<"\nCheck vector is empty or not"<<endl;
	check_empty(arr);
	cout<<"\nClear Vector"<<endl;
	arr.clear();
	cout<<"\nCheck vector is empty or not"<<endl;
	check_empty(arr);
	vector<vector<int> > matrix;
	cout<<"\n Enter row and column: ";
	int r,c;
	cin>>r>>c;
	insert_element(matrix,r,c);
	cout<<"Display MATRIX"<<endl;
	display_element(matrix,r,c);
	return 0; 
}
