#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string S;
    cin >> S;
    S = S.substr(1);

    size_t pos = 0;
    while ((pos = S.find('|')) != string::npos) {
        cout << pos << " ";
        S = S.substr(pos + 1);
    }
    cout << endl;

    return 0;
}
