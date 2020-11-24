#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>&s,int x){
	if(s.empty()){
		s.push(x);
		return;
	}
	int data=s.top();
	s.pop();
	insertAtBottom(s,x);
	s.push(data);
}

void resverseStackRecusive(stack<int>&s){
	//base case
	if(s.empty()){
		return;
	}
	//rec case

	int x=s.top();
	s.pop();

	//recursively reverse the stack
	resverseStackRecusive(s);
	insertAtBottom(s,x);

}


int main()
{



#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("opt2.txt","w",stdout);
#endif


    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // reverseStack(s);
    resverseStackRecusive(s);
    while(!s.empty()){
    	cout<<s.top()<<" ";
    	s.pop();
    }

    return 0;
}