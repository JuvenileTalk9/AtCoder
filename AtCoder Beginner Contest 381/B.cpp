#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N;
    string S;
    cin >> N >> S;

    size_t pos, max_length = 0;
    while ((pos = S.find_first_of('/')) != string::npos) {
        max_length = max(max_length, (size_t)1);
        for (size_t i = 1; i <= min(pos, S.length() - pos - 1); i++) {
            if (S[pos - i] != '1' || S[pos + i] != '2') break;
            max_length = max(max_length, i * 2 + 1);
        }
        S = S.substr(pos + 1);
    }
    cout << max_length << endl;

    return 0;
}
