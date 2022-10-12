#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    if (k == 1 || l == 1 || m == 1 | n == 1) {
        cout << d;
        return 0;
    }
    int out = 0;
    for (int i = 1; i <= d; i++) {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) out++;
    }
    cout << out;
    return 0;
}