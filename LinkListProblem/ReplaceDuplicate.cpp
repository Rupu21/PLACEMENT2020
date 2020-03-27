#include<iostream>
#include<map>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
};
Node *insert(Node *head,int data){
	Node *temp=new Node(data);
	if(head==NULL)
		return temp;
	else{
		Node *t=head;
		while(t->next!=NULL){
			t=t->next;
		}
		t->next=temp;
		return head;
	}
}
int findMax(Node *head){
	if(head==NULL)
		return -1;
	int max=head->data;
	Node *t=head->next;
	while(t!=NULL){
		if(t->data>max)
			max=t->data;
		t=t->next;
	}
	return max;
}
void display(Node *head){
	if(head!=NULL){
		Node *temp=head;
		while(temp->next!=NULL){
			cout<<temp->data<<"-> ";
			temp=temp->next;
		}
		cout<<temp->data<<endl;
	}
}
int main(){
	map<int,int> mp;//Map for storing present bit(1) in particular data position
	//We could use array in place of map such that arr[node->data]=1 By this we can chexk duplicacy in linklist
	//But it consumes huge memory space .So we use map for storing 
	int n;
	cout<<"Enter range"<<endl;
	int data;
	Node *start=NULL;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"enter "<<i+1<<" data : ";
		cin>>data;
		start=insert(start,data);
	}
	cout<<"Before change"<<endl;
	display(start);
	Node *temp=start;
	int maximum=findMax(start);
	if(maximum!=-1){
		while(temp!=NULL){
			//Here we are checking if element is not present
			//mp.find(data) return Iterator object 
			//If that object is equal to map.end() iterator object ,it means value is not present
			//Then we store 1 in that value (as index)
			//mp[1]=1,mp[7]=1
			if(mp.find(temp->data)==mp.end()){
				mp[temp->data]=1;
			}
			//if again 1 encounter then mp[1]=1 then linklist value will be incremented
			else{
				temp->data=++maximum;
			}
			temp=temp->next;
		}
	}
	cout<<"After change"<<endl;
	display(start);
	return 0;
}

