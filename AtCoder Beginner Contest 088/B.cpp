#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N;
    cin >> N;

    vector<int> vec(N);
    for (auto& a : vec) cin >> a;
    sort(vec.begin(), vec.end());
    int point[2] = {0, 0};
    for (int size = vec.size(), i = size - 1; i >= 0; i--) {
        point[i % 2] += vec[i];
    }

    cout << max(point[0], point[1]) - min(point[0], point[1]) << "\n";
    return 0;
}
