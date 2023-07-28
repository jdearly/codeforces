#include <bits/stdc++.h>

using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k, ans = 0;
    cin >> n >> k;     
    int x = 0;
    for (int i = 1; i <= n; i++) {
        int val;
        cin >> val;
        if (i == k) {
            x = val;
        } 
        if (val >= x && val != 0) { 
            ans++;
        }
    }
    cout << ans;
}
