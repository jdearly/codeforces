#include <bits/stdc++.h>

using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // solution
    int m, n;
    cin >> m >> n;
    int limit = m*n;
    int ans = 0;
    int domino = 2;
    while (domino <= limit) {
        ans++;
        domino += 2;
    }
    cout << ans;
    return 0;
}
