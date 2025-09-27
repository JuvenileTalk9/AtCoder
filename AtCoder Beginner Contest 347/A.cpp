#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N, K, A;
    vector<int> B;

    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> A;
        if (A % K == 0) {
            B.push_back(A / K);
        }
    }
    sort(B.begin(), B.end());
    for (int i = 0, size = B.size(); i < size; i++) {
        cout << B[i] << " ";
    }
    cout << endl;

    return 0;
}
