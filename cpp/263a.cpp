#include <bits/stdc++.h>

using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // solution
    int center = 2;
    int val;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> val;
            if (val == 1) {
                cout << abs(i - center) + abs(j - center);
                return 0;
            }
        }
    }
}