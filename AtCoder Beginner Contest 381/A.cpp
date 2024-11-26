#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N;
    string S;
    cin >> N >> S;

    auto pos = S.find_first_of('/');
    if (pos == string::npos || pos != (N - pos - 1)) {
        cout << "No" << endl;
        return 0;
    }

    string s1 = S.substr(0, pos);
    string s2 = S.substr(pos + 1);
    if (s1.find_first_not_of('1') != string::npos || s2.find_first_not_of('2') != string::npos) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;
    return 0;
}
