#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int in = 0;
    int max = 0;
    while (n--) {
        int x, y;
        cin >> x >> y;
        in += y-x;
        max = max < in ? in : max;
    }
    cout << max << "\n";
    return 0;
}