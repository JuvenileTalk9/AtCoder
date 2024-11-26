#include <bits/stdc++.h>
using namespace std;

int main(void) {
    vector<int> C(9);
    for (auto& c : C) cin >> c;

    // 最小の要素を探索
    auto min_iter = min_element(C.begin(), C.end());
    int min_idx = distance(C.begin(), min_iter);

    for (int a1 = 0; a1 <= *min_iter; a1++) {
        int b1 = *min_iter - a1;
        int a2 = C[(min_idx + 3) % 9] - b1;
        int a3 = C[(min_idx + 6) % 9] - b1;
        int b2 = C[(min_idx + 1) % 3] - a1;
        int b3 = C[(min_idx + 2) % 3] - a1;

        if (a1 + b1 == C[(min_idx + 0) % 3] && a1 + b2 == C[(min_idx + 1) % 3] &&
            a1 + b3 == C[(min_idx + 2) % 3] && a2 + b1 == C[3 + (min_idx + 0) % 3] &&
            a2 + b2 == C[3 + (min_idx + 1) % 3] && a2 + b3 == C[3 + (min_idx + 2) % 3] &&
            a3 + b1 == C[6 + (min_idx + 0) % 3] && a3 + b2 == C[6 + (min_idx + 1) % 3] &&
            a3 + b3 == C[6 + (min_idx + 2) % 3]) {
            cout << "Yes" << "\n";
            return 0;
        }
    }

    cout << "No" << "\n";
    return 0;
}
