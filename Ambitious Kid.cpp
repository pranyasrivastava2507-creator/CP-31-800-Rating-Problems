#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    
    vector<int> A(N);
    int mini=INT_MAX;
    for (int i=0;i<N;i++){
        cin>>A[i];
        mini=min(mini,abs(A[i]));
    }
    
    cout<<mini;
    
}
