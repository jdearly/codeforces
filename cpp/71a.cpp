#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        if (word.size() > 10) {
            char first = word[0];
            char last = word[word.size()-1];
            string letters = to_string(word.size()-2);
            cout << first << letters << last << endl;
        } else {
            cout << word << endl;
        }
    }
    return 0;
}
