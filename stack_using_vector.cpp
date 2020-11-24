#include <bits/stdc++.h>
using namespace std;

class stack_using_vector
{
private:
    vector<int> v;
public:
    void push(int data){
        v.push_back(data);
    }
    bool empty(){
        return v.size()==0;
    }
    void pop(){
        while(!empty()){
            v.pop_back();
        }
    }

    int top(){
        return v[v.size()-1];
    }
    
};


int main()
{
    

#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif


    stack_using_vector s;



    s.push(10);
    s.push(20);
    s.push(30);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
   

      return 0;

}