#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while (t--){
        int n;
        cin>>n;
        
        vector<int> a(n);
        int cnt=0;
        for (int i=0;i<n;i++){
            cin>>a[i];
            if (i!=0){
                if (a[i]%2==a[i-1]%2){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}