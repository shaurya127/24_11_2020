#include<bits/stdc++.h>
using namespace std;

class MinMaxStack{

	vector<int>stack;
	vector<int>min_stack;
	vector<int>max_stack;

public:

	void push(int data){
		int curr_min=data;
		int curr_max=data;

		if(min_stack.size()){
			curr_min=min(min_stack[min_stack.size()-1],data);
			curr_max=max(max_stack[max_stack.size()-1],data);
		}
		min_stack.push_back(curr_min);
		max_stack.push_back(curr_max);
		stack.push_back(data);
	}

	int get_min(){
		return min_stack[min_stack.size()-1];
	}
	int get_max(){
		return max_stack[max_stack.size()-1];
	}
	bool empty(){
		return stack.size()==0;
	}

	void pop(){
		min_stack.pop_back();
		max_stack.pop_back();
		stack.pop_back();
	}

	// void print(){
	// 	for(int x:stack){
	// 		cout<<x<<" ";
	// 	}
	// 	// cout<<endl;
	// }

	// for(auto x1:min_stack){
	// 	cout<<x<<" ";
	// }
	// // cout<<endl;
	// for(auto x2:max_stack){
	// 	cout<<x<<" ";
	// }
	// cout<<endl;

};



int main()
{



#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("opt2.txt","w",stdout);
#endif

    MinMaxStack s;
    
    s.push(1);
    s.push(5);
    s.push(3);
    s.push(8);
    
    cout<<s.get_max()<<endl;
    cout<<s.get_min()<<endl;

    s.pop();

    cout<<s.get_max()<<endl;
    // cout<<s.top();

    
    

    return 0;
}