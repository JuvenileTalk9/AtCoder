#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N, answer;
    cin >> N;

    int t, x, y, t0 = 0, x0 = 0, y0 = 0, cnt = 0;
    while (cin >> t >> x >> y) {
        int dxy = abs(x - x0) + abs(y - y0);
        int dt = t - t0;

        if (dxy > dt || dxy % 2 != dt % 2) {
            cout << "No" << "\n";
            break;
        }

        t0 = t;
        x0 = x;
        y0 = y;

        if (++cnt == N) {
            cout << "Yes" << "\n";
            break;
        }
    }

    return 0;
}
