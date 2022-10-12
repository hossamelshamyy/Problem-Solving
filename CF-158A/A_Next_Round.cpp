#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int result = 0;
    vector<int> v;
    while (n--) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for (int x : v) {
        if(x >= v[k - 1] && x > 0) result = result + 1;
    }

    cout << result << "\n";
    return 0;
}