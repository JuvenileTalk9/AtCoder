#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string S;
    vector<string> sub;
    cin >> S;

    for (int i = 1; i <= S.length(); i++) {
        for (int j = 0; j <= S.length() - i; j++) {
            sub.push_back(S.substr(j, i));
        }
    }
    sort(sub.begin(), sub.end());
    sub.erase(unique(sub.begin(), sub.end()), sub.end());

    cout << sub.size() << endl;
    return 0;
}
