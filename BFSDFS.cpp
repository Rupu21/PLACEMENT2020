#include<iostream>
using namespace std;
struct stuck1{
	int data[100];
	int top;
};
struct queue1{
	int data[100];
	int rear;
	int front;
};
void enque(queue1 *ob,int item){
	if(ob->front==100){
		cout<<"Overloaded"<<endl;
		return;
	}
	else{
		ob->data[++(ob->rear)]=item;
	}
}
int deque(queue1 *ob){
	if(ob->front==-1 && ob->front==ob->rear){
		cout<<"underflow"<<endl;
		return -1;
	}
	int x=ob->data[++(ob->front)];
	return x;
}
void push(stuck1 *ob,int item){
	if(ob->top==100){
		cout<<"Overflow"<<endl;
		return;
	}
	else{
		ob->data[++(ob->top)]=item;
	}
}
int pop(stuck1 *ob){
	if(ob->top==-1){
		cout<<"underflow"<<endl;
		return -1;
	}
	int x=ob->data[ob->top--];
	return x;
}
void bfs(int n,int arr[8][8],int visit[]){
	cout<<endl<<"***************BFS****************"<<endl;
	struct queue1 ob;
	ob.rear=ob.front=-1;
	enque(&ob,0);
	while(ob.rear!=ob.front){
		int idx=deque(&ob);
		if(visit[idx]==0){
			cout<<idx+1<<" ";
			visit[idx]=1;
			for(int i=0;i<n;i++){
				if(visit[i]==0 && arr[idx][i]==1)
					enque(&ob,i);
			}
		}
	}
	
}
void dfs(int n,int arr[8][8],int visit[]){
	cout<<"***************DFS****************"<<endl;
	struct stuck1 ob;
	ob.top=-1;
	push(&ob,0);
	while(ob.top!=-1){
		int idx=pop(&ob);
		//cout<<"Pop object is : "<<idx+1<<endl;
		if(visit[idx]==0){
			cout<<idx+1<<" ";
			visit[idx]=1;
			for(int i=0;i<n;i++){
				if(visit[i]==0 && arr[idx][i]==1){				
					push(&ob,i);
				//	cout<<"Push object index is :"<<i+1<<endl;
				}
			}
		}
	}	
}
void recursivedfs(int a[8][8],int visit[],int idx){
	visit[idx]=1;
	int i;
	cout<<idx+1<<" ";
	for(i=0;i<8;i++){
		if(visit[i]==0 && a[idx][i]==1)
			recursivedfs(a,visit,i);
	}
}
int main(){
	int n;
	cout<<"Enter total number of vertex"<<endl;
	cin>>n;
	int arr[8][8];
	int visit1[n]={0};
	int visit2[n]={0};
	int visit3[n]={0};
	int i=0,j=0;
	cout<<"Enter matrix"<<endl;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	dfs(n,arr,visit1);
	bfs(n,arr,visit2);
	cout<<endl<<"Recursive DFS :"<<endl;
	recursivedfs(arr,visit3,0);
	return 0;
}
