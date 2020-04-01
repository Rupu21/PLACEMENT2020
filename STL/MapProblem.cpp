/*In competitive programming you can not compit without STL if you are using C++
	This is like a container which holds data in an efficient manner
Maps are the associative containers that store sorted key-value pair,
 in which each key is unique and it can be inserted or deleted but cannot be altered. 
 Values associated with keys can be changed.
	Iterator is just like a pointer
	*/
#include<iostream>
#include<string.h>
#include<map>
#include <utility>  
using namespace std;
void value_insert(map<string,int> &result){
	cout<<"\nEnter Marks of Rao : ";
	int m;
	cin>>m;
	result.insert(pair<string,int>("Rao",m));
	cout<<endl;
}
void remove_by_iterator(map<string,int> &result){
	map<string,int>:: iterator it;
	cout<<"\nEnter Name : ";
	string m;
	cin>>m;
	it=result.find(m);
	if(it!=result.end()){
		result.erase(it);
		return;
	}
	cout<<endl<<"Not Found "<<endl;
}
void remove_by_key(map<string,int> &result){
	map<string,int>:: iterator it;
	cout<<"\nEnter Name : ";
	string m;
	cin>>m;
	result.erase(m);
}
void display_all(map<string,int> result){
	map<string,int>:: iterator it;
	cout<<endl;
	for(it=result.begin();it!=result.end();it++){
		cout<<(*it).first<<" : "<<(*it).second<<endl;
	}
}
void display_reverse(map<string,int> result){
	map<string,int>:: reverse_iterator it;
	cout<<endl;
	for(it=result.rbegin();it!=result.rend();it++){
		cout<<(*it).first<<" : "<<(*it).second<<endl;
	}
}
void find_ele(map<string,int> result){
	string m;
	cout<<"Enter key : ";
	cin>>m;
	if(result.count(m)>0)
		cout<<"\n Elements present"<<endl;
	else
		cout<<"\n Not Present";
}
int main(){
	map<string,int> result;
	result["Ram"]=30;
	cout<<"\nSize of Map : "<<result.size();
	result["Ram"]=77;
	cout<<"\nSize of Map : "<<result.size();
	result["Ram"]=38;
	cout<<"\nSize of Map : "<<result.size();
	result["Binoy"]=39;
	cout<<"\nSize of Map : "<<result.size();
	value_insert(result);
	cout<<"\nSize of Map : "<<result.size();
	display_all(result);
	cout<<"\nModified Ram's mark to 78"<<endl;
	result.at("Ram")=78;
	display_all(result);
	cout<<"\nDelete an element";
	remove_by_iterator(result);
	cout<<"\nSize of Map : "<<result.size();
	display_all(result);
	cout<<"\nDelete an element";
	remove_by_key(result);
	cout<<"\nSize of Map : "<<result.size();
	display_all(result);
	cout<<"\nFind an element in map ";
	find_ele(result);
	cout<<"\nPrint in reverse direction";
	display_reverse(result);
	return 0;
}

