#include <bits/stdc++.h>
using namespace std;

template<typename T>
class stack_using_vector
{
private:
    vector<T> v;
public:
    void push(T data){
        v.push_back(data);
    }
    bool empty(){
        return v.size()==0;
    }
    void pop(){
        if(!empty()){
            v.pop_back();
        }
    }

    T top(){
        return v[v.size()-1];
    }
    
};

//main

int main()
{
    

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif


    // stack_using_vector<char> s;
    stack_using_vector<int>s;

    for (int i = 1; i <=5; ++i)
    {
        s.push(i*i);
    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }


    // cout<<"\n\n";

    // s.push('a');
    // s.push('b');
    // s.push('c');
    // cout<<s.top()<<endl;
    // s.pop();
    // cout<<s.top()<<endl;
   

      return 0;

}
