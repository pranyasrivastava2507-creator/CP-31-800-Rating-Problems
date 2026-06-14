#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        bool sorted = true;
        int mn = INT_MAX;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (i > 0) {
                if (a[i] < a[i - 1])
                    sorted = false;

                mn = min(mn, a[i] - a[i - 1]);
            }
        }

        if (!sorted) {
            cout << 0 << '\n';
        } else {
            cout << mn / 2 + 1 << '\n';
        }
    }

    return 0;
}