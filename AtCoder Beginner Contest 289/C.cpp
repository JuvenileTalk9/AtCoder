#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> in_vec(M);
    for (int m = 0; m < M; m++) {
        int C;
        cin >> C;
        in_vec[m].resize(C);
        for (auto& a : in_vec[m]) cin >> a;
    }

    int cnt = 0;
    for (int m = 0; m < (1 << M); m++) {
        set<int> s;
        for (int i = 0; i < M; i++) {
            if ((m >> i) & 1) {
                for (auto& x : in_vec[i]) s.insert(x);
            }
        }
        if (s.size() == N) cnt++;
    }

    cout << cnt << "\n";
    return 0;
}
