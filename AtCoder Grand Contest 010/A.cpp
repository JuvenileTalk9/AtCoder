#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N, a, n_number = 0, n_odd = 0;
    cin >> N;
    while (cin >> a) {
        if (a % 2 != 0) n_odd++;
        if (++n_number == N) break;
    }

    string answer = n_odd % 2 == 0 ? "YES" : "NO";
    cout << answer << "\n";
    return 0;
}
