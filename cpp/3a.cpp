#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // solution
    string start, stop;
    cin >> start >> stop;
    int horizon_dist, vert_dist;
    char horizon_let, vert_let;

    if (start[0] < stop[0]) {
        horizon_dist = stop[0] - start[0];
        horizon_let = 'R';
    } else {
        horizon_dist = start[0] - stop[0];
        horizon_let = 'L';
    }

    if (start[1] < stop[1]) {
        vert_dist = stop[1] - start[1];
        vert_let = 'U';
    } else {
        vert_dist = start[1] - stop[1];
        vert_let = 'D';
    }

    int moves = max(horizon_dist, vert_dist);
    cout << moves << endl;

    while (moves--) {
        if (--horizon_dist >= 0) cout << horizon_let;
        if (--vert_dist >= 0) cout << vert_let;
        cout << endl;
    }

    return 0;
}
