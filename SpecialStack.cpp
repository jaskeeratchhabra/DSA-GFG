// { Driver Code Starts
#include<iostream>
#include<stack>
using namespace std;
void push(stack<int>& s,int a);
bool isFull(stack<int>& s,int n);
bool isEmpty(stack<int>& s);
int pop(stack<int>& s);
int getMin(stack<int>& s);
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}// } Driver Code Ends


void push(stack<int>& s, int a){
	// Your code goes here
	s.push(a);
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	if(s.size()==n)
	return true;
	else 
	return false;
	
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	if(s.size()==0)
	return true;
	else 
	return false;
}

int pop(stack<int>& s){
	// Your code goes here
	int x=s.top();
	s.pop();
	return x;
}

int getMin(stack<int>& s){
	// Your code goes here
	int minele=2324343;
	if(s.size()==0)
	return -1;
	else
	{  while(!s.empty())
	   {   
	    int temp=s.top();
	    s.pop();
	    if(temp<minele)
	    minele=temp;
	   }
	}
	return minele;
	
}
