/* C++ program to implement basic stack
operations */
#include <bits/stdc++.h>

using namespace std;

#define MAX 1000

class Stack {
    

public:
    int top=-1;
    int a[MAX]; // Maximum size of Stack

    
    void push(int x){
        if(top>=(MAX-1)){
            cout<<"Stack Overflow";
        }
        else{
            top++;
            a[top]=x;
            cout<<x<<" pushed into stack"<<endl;
        }
    }
    int pop(){
        if(top<0){
            cout<<"stack Underflow";
            return 0;
        }
        else{
            int x=a[top];
            top--;
            return x;

        }
    }
    int peek(){
        if(top<0){
            cout<<"stack is Empty";
            return 0;
        }
        else{
            int x=a[top];
            return x;
        }
    }
    bool isEmpty(){
        return top<0;
    }
};

/
// Driver program to test above functions
int main()
{


#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif


    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";
    cout<<s.peek()<<endl;
    while(!s.isEmpty()){
        cout<<s.peek()<<" "<<endl;
        s.pop();
    }
    // cout<<s.peek();
    cout<<s.pop();

    return 0;
}


