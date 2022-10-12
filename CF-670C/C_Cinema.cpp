#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    map<int, int> mp;
    while (n--) {
        int x;
        cin >> x;
        mp[x] += 1;
    }
    int m;
    cin >> m;
    int m_orig = m;
    vector<int> weights;
    while (m--) {
        int x;
        cin >> x;
        weights.push_back(1000*mp[x]);
    }

    for (int i = 0; i < m_orig; i++) {
        int x;
        cin >> x;
        weights[i] += mp[x];
    }

    auto max = max_element(weights.begin(), weights.end());

    cout << max - weights.begin() +1 << "\n";

    return 0;
}