#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        } 
        int maxi=a[0];
        int prev=0;
        for (int i=0;i<n;i++){
            maxi=max(maxi,a[i]-prev);
            prev=a[i];
        }
        maxi=max(maxi,2*(x-prev));
        cout<<maxi<<endl;
    }
    return 0;
}