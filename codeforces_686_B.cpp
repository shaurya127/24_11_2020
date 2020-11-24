#include <bits/stdc++.h>
using namespace std;
int main() {
    int testshaurya; cin>>testshaurya;

    while(testshaurya--){
            int n; cin>>n;
            int arr1[n];
            int arr2[n];
            for(int i=0;i<n;i++){
                    cin>>arr1[i];
                    arr2[i]=arr1[i];
            }
            sort(arr1,arr1+n);
            int count=0;
            for(int i=0;i<n;i++){
                    if(i==0 && arr1[i]!=arr1[i+1]){
                            count=arr1[i];
                            break;
                    }
                    else if(i==(n-1) && arr1[i]!=arr1[i-1]){
                            count=arr1[i];
                            break;
                    }
                    else if(arr1[i]!=arr1[i+1] && arr1[i]!=arr1[i-1]){
                            count=arr1[i];
                            break;
                    }
            }
            if(count==0){
                    cout<<-1<<endl;
            }
            else{
                    for(int i=0;i<n;i++){
                            if(count==arr2[i]){
                                    cout<<i+1<<endl;
                                    break;
                            }
                    }

            }

    }
}
