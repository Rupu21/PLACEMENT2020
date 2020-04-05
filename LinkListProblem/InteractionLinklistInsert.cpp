#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};
struct MyList{
	Node *start,*p;
	MyList(){
		start=NULL;
	}
	void insert(int x){
		Node *temp=new Node(x);
		if(start==NULL){
			start=p=temp;
			return;
		}
		p->next=temp;
		p=temp;
	}
	void display(){
		if(start==NULL){
			cout<<"No element"<<endl;
			return;
		}
		Node *q=start;
		while(q->next!=NULL){
			cout<<q->data<<"->"<<" ";
			q=q->next;
		}
		cout<<q->data<<endl;
	}
};
int main(){
	struct MyList ob1;
	string choice="";
	while(1){
		cout<<endl<<"Enter elements: ";
		int n;
		cin>>n;
		ob1.insert(n);
		cout<<"Do you want to insert again \nIf yes then type yes/Yes/YES otherwise no/No/NO"<<endl;
		cin>>choice;
		if(choice=="no"||choice=="No"||choice=="NO")
			break;
	}
	ob1.display();
	return 0;
}
