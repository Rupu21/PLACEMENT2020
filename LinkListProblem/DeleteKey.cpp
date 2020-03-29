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
	void deleteKey(int x){
		if(start==NULL){
			cout<<"No element"<<endl;
			return;
		}
		Node *q=start;
		//We are checking where key value is matched
		while(q!=NULL && q->data!=x){
			q=q->next;
		}
		//now we are copying rest of the values in one node back
		while(q->next!=NULL){
			int temp=q->next->data;
			q->data=temp;
			if(q->next->next==NULL){
				q->next=NULL;
				break;
			}
			q=q->next;
		}
		
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
	for(int i=1;i<10;i++)
		ob1.insert(i);
	ob1.display();
	ob1.deleteKey(2);
	ob1.display();
	return 0;
}
