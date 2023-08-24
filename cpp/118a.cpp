#include <bits/stdc++.h>
#define ll long long

using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string str, ans;
    cin >> str;
    vector<char> vowels{'a', 'o', 'y', 'e', 'u', 'i'};
    
    for (int i = 0; i < str.length(); i++) {
        char c = str.at(i);
        c = tolower(c);
        if (find(vowels.begin(), vowels.end(), c) == vowels.end()) {
           ans.push_back('.'); 
           ans.push_back(c); 
        }
    }
    cout << ans;
    return 0;
}
