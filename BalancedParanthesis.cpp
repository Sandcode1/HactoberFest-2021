#include <bits/stdc++.h>
using namespace std;



bool isvalid(string x){
	
	stack<char> s; 
	char a; 

	for (int i=0; i<x.length(); i++) 
	{ 
		if (x[i]=='('||x[i]=='['||x[i]=='{') 
		{ 
		
			s.push(x[i]); 
			continue; 
		} 
		if (s.empty()) 
		return false; 

		switch (x[i]) 
		{ 
		case ')': 

	
			a = s.top(); 
			s.pop(); 
			if (a=='{' || a=='[') 
				return false; 
			break; 

		case '}': 

		
			a = s.top(); 
			s.pop(); 
			if (a=='(' || a=='[') 
				return false; 
			break; 

		case ']': 

		 
			a = s.top(); 
			s.pop(); 
			if (a =='(' || a == '{') 
				return false; 
			break; 
		} 
	} 


	return (s.empty());
}
int main()
{
	string s;
	cin>>s;
	if(isvalid(s)){
		cout<<"Balanced";
	}
	else{
		cout<<"NOT";
	}

	return 0;
}

