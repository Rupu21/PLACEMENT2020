#include<iostream>
#include<string.h>
using namespace std;
int main(){
	cout<<"Enter string"<<endl;
	char s1[100],s2[100];
	cin>>s1;
	cout<<"METHOD 1:"<<endl;
	strcpy(s2,s1);
	strrev(s2);
	if(strcmp(s1,s2)==0)
		cout<<"Palindrome"<<endl;
	else
		cout<<"Not palindrome"<<endl;
	cout<<"METHOD 2:"<<endl;
	int start=0,end=strlen(s1)-1;
	while(start<end){
		if(s1[start++]!=s1[end--]){
			cout<<"Not palindrome"<<endl;
			return 0;
		}
	}
	cout<<"palindrome"<<endl;
	return 0;
}
