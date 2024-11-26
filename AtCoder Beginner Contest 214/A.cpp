#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    if (1 <= N && N <= 125) {
        cout << 4 << "\n";
    } else if (126 <= N && N <= 211) {
        cout << 6 << "\n";
    } else {
        cout << 8 << "\n";
    }
    return 0;
}
