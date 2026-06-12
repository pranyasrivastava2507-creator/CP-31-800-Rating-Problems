#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while (t--){
        int n,k;
        cin>>n>>k;
        
        vector<int> a(n);
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        
        unordered_map <int,int> mpp;
        for (int i=0;i<n;i++){
            mpp[a[i]]++;
        }
        
        if (mpp.count(k)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
