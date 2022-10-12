#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, s;
    cin >> n >> s;
    vector<pair<int, int>> v;
    while (n--) {
        int x, y;
        cin >> x >> y;
        pair<int, int> q(x, y);
        v.push_back(q);
    }
    int time = 0;
    int curFloor = s;
    for (int i = v.size() - 1; i > -1; i--) {
        time += curFloor - v[i].first;
        curFloor = v[i].first;
        if (time < v[i].second) {
            time += v[i].second - time;
        }
    }
    time += curFloor;
    cout << time;
    return 0;
}