#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
struct Node * insert(Node *start,int x){
	Node *temp=new Node;
	temp->data=x;
	temp->next=NULL;
	if(start==NULL){
		return temp;
	}
	Node *p=start;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=temp;
	return start;
}
void display(Node *start){
	if(start==NULL){
		cout<<"No element"<<endl;
		return;
	}
	Node *p=start;
	while(p->next!=NULL){
		cout<<p->data<<" - > "<<" ";
		p=p->next;
	}
	cout<<p->data<<endl;
}
void detect_loop_head(Node *start){
	Node *p=start,*q=start;
	//Floyd's algo
	//Take two pointer ,one is slow and another is fast
	//if there is cycle then two pointer coincide surely
	while(p && q && q->next){
		p=p->next;
		q=q->next->next;
		if(p->data==q->data){
			p=start;
			Node *t=q;
			while(p->data!=q->data){
				p=p->next;
				t=q;
				q=q->next;
			}
			cout<<"\nStarting of the loop is : "<<p->data<<endl;
			//cout<<"Now we are breaking loop "<<endl;
			//Breaking the loop
			t->next=NULL;
			return;
		}
	}
	cout<<"There is no loop in the linklist"<<endl;
}
int main(){
	struct Node *head=NULL;
	for(int i=1;i<=7;i++){
		head=insert(head,i);
	}
	display(head);
	//creating the loop explicitly
	head->next->next->next->next->next->next=head->next->next;
	detect_loop_head(head);
	
}
