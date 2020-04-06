#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *right;
	struct Node *down;
	Node(int x){
		data=x;
		right=NULL;
		down=NULL;
	}
};
struct MyList{
	Node *start;
	MyList(){
		start=NULL;
	}
	void insert_down(int x){
		Node *temp=new Node(x);
		Node *p=start;
		if(start==NULL){
			start=temp;
			return;
		}
		while(p->down!=NULL)
			p=p->down;
		p->down=temp;
	}
	void insert_right(int x){
		Node *temp=new Node(x);
		Node *p=start;
		if(start==NULL){
			start=temp;
			return;
		}
		while(p->down!=NULL)
			p=p->down;
		while(p->right!=NULL)
			p=p->right;
		p->right=temp;
	}

	void display(){
		if(start==NULL){
			cout<<"No element"<<endl;
			return;
		}
		Node *q,*r=start;
		cout<<"Linklist Print"<<endl;
		while(r->down){
			q=r;
			while(q->right){
				cout<<q->data<<"->";
				q=q->right;
			}
			cout<<q->data;
			cout<<endl;
			cout<<"|";
			cout<<endl;
			r=r->down;
		}
		//Now r has been incremente to last row so we use r variable.But we can use again assign q=r and use q variable as well
		while(r->right){
				cout<<r->data<<"->";
				r=r->right;
			}
			cout<<r->data;
		}
};
int main(){
	struct MyList ob1;
	int n;
	cout<<"Enter range\n";
	cin>>n;
	int arr[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"\nEnter "<<i<<" th row "<<j<<" th column value: ";
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++){
		ob1.insert_down(arr[i][0]);
		for(int j=1;j<n;j++){
			ob1.insert_right(arr[i][j]);
		}
	}
	ob1.display();
	return 0;
}
