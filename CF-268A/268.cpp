#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    int n, result = 0;
    cin >> n;
    vector<int> hosts;
    vector<int> guests;
    for (int i = 0; i < n; i++) {
        int x,y;
        cin >> x >> y;
        hosts.push_back(x);
        guests.push_back(y);
    }

    for (auto i = hosts.begin(); i != hosts.end(); i++) {
        for (auto j = guests.begin(); j != guests.end(); j++) {
            if (*i == *j) result += 1;
        }
    }

    cout << result;

    return 0;
}