// C++ program to add two binary strings 
#include<bits/stdc++.h> 
#include <cstdlib>
#include <iostream>
using namespace std; 

// This function adds two binary strings and return 
// result as a third string 
string addBinary(string a, string b) 
{ 
	char a1[a.length()+1];
	char b1[b.length()+1];
	strcpy(a1, a.c_str());//String to charaxtwe  
	strcpy(b1, b.c_str());//String to character 
	int numa=atoi(a1);//Char [] to number
	int numb=atoi(b1);//Char[] to number
	int sum[5],carry[5]={0};
		for(int i=0;i<5;i++){
		int num1=numa%10;//Extracting last digit of upper
		int num2=numb%10;//Extracting last digit of lower
		numa/=10;//Reducing num by 10
		numb/=10;//Reducing num by 10
		sum[i]=(carry[i]^num1^num2);//sum logic 
		//cout<<sum[i]<<endl;
		if(carry[i]==1 && num1==1)
				carry[i+1]=1;
			else if((carry[i]^num1)==1 && num2==1)
				carry[i+1]=1;
		}
		string str;
			for (int i=4;i>=0;i--) 
				str.push_back(sum[i] + '0');
		return str;
	
}

// Driver program 
int main() 
{ 
	string a = "000";
	string b = "111"; 
	cout<<addBinary(a, b); 
	return 0; 
} 

