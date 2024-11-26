#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string N;
    cin >> N;

    int cnt[3] = {0, 0, 0};
    for (int i = 0; i < 6; i++) {
        if (N[i] == '1') cnt[0]++;
        if (N[i] == '2') cnt[1]++;
        if (N[i] == '3') cnt[2]++;
    }

    if (cnt[0] == 1 && cnt[1] == 2 && cnt[2] == 3)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
