#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N;
    cin >> N;

    vector<array<int, 3>> vec;
    int t, l, r;
    while (cin >> t >> l >> r) {
        vec.push_back({t, l, r});
        if (vec.size() == N) break;
    }

    int cnt = 0;
    for (int i = 0, size = vec.size(); i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            int overlap_min = max(vec[i][1], vec[j][1]);
            int overlap_max = min(vec[i][2], vec[j][2]);
            if (overlap_min < overlap_max) {
                cnt++;
            } else if (overlap_min == overlap_max) {
                if (vec[i][2] == vec[j][1]) {
                    if ((vec[i][0] == 1 || vec[i][0] == 3) && (vec[j][0] == 1 || vec[j][0] == 2))
                        cnt++;
                }
                if (vec[j][2] == vec[i][1]) {
                    if ((vec[j][0] == 1 || vec[j][0] == 3) && (vec[i][0] == 1 || vec[i][0] == 2))
                        cnt++;
                }
            }
        }
    }

    cout << cnt << "\n";
    return 0;
}
