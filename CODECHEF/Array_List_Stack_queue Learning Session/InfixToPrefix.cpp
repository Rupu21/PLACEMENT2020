#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int checkPrecedence(char c){
	if(c=='+'||c=='-')
		return 1;
	else if(c=='*'||c=='/')
		return 2;
	else if(c=='^')
		return 3;
	else return -1;
}
bool isOperator(char C){
	if(C == '+' || C == '-' || C == '*' || C == '/' || C== '^')
		return true;
	else 
		return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		stack<char> c;
		for(int i=0;i<n;i++){
			if(s.at(i)=='(')
				c.push('(');
			else if(s.at(i)==')'){
				while(c.top()!='('){
					cout<<c.top();
					c.pop();
				}
				c.pop();
			}
			else if(isalpha(s.at(i)))
				cout<<s.at(i);
			else{
					while(c.size()>0 && checkPrecedence(s.at(i))<=checkPrecedence(c.top())){
						cout<<c.top();
						c.pop();
					}
					c.push(s.at(i));
			}
		}
		while(c.size()>0){
			cout<<c.top();
			c.pop();
		}
		cout<<endl;
	}
	return 0;
}