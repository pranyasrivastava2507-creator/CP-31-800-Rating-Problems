#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        
        vector<int> a(n);
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        
        int positive=0;
        int negative=0;
        for (int i=0;i<n;i++){
            if (a[i]==1){
                positive++;
            }
            else{
                negative++;
            }
        }
        
        int operations=0;
        while (positive<negative || negative %2==1){
            operations++;
            positive++;
            negative--;
        }
        cout<<operations<<endl;
        
    }
    return 0;
}