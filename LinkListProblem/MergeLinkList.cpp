#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};
struct Node * insert(Node *start,int x){
	Node *temp=new Node(x);
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
struct Node* merge_list(Node *h1,Node *h2){
	Node *new_head=new Node(-1);
	Node *p=new_head,*q=h1,*r=h2;
	while(q && r){
		if(q->data<r->data){
			p->next=q;
			p=q;
			q=q->next;
		}
		else{
			p->next=r;
			p=r;
			r=r->next;
		}
	}
	while(q){
		p->next=q;
		p=q;
		q=q->next;
	}
	while(r){
		p->next=r;
		p=r;
		r=r->next;
	}
	return new_head->next;
}
int main(){
	struct Node *head1=NULL,*head2=NULL,*head3;
	for(int i=1;i<=7;i+=2){
		head1=insert(head1,i);
	}
	for(int i=2;i<=7;i+=2){
		head2=insert(head2,i);
	}
	display(head1);
	display(head2);
	head3=merge_list(head1,head2);
	display(head3);
}
