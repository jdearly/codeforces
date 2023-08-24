#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // solution
    ll n, m, a;
    cin >> n >> m >> a;
    cout << ((n+a-1)/a)*((m+a-1)/a);
    return 0;
}