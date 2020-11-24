#include<bits/stdc++.h>
using namespace std;

int main()
{



#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("opt2.txt","w",stdout);
#endif

    int t; cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	std::vector<int> v;
    	for(int i=n;i>=1;i--){
    		v.push_back(i);
    	}
    	if(n%2!=0){
    		int mid=n/2;
    		swap(v[mid],v[mid+1]);
    	}
    	for (int i = 0; i < n; ++i)
    	{
    		cout<<v[i]<<" ";
    	}
    	cout<<endl;
    }
    

    return 0;
}