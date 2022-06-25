#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a = 97;
    string result;
    for (uint16_t i = 0; i < k; i++) {
        result.push_back(char(a));
        a++;
    }
    for (uint16_t i = result.size(); i < n; i++) {
        result.push_back(result[i-k]);

    }
    cout << result;
    return 0;
}