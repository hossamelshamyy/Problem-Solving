#include <bits/stdc++.h>

#include <iostream>
using namespace std;
typedef long long ll;

bool isValid(int curX, int curY, int x, int y, int maxX, int maxY) {
    return ((curX + x) > 0 && (curX + x) <= maxX) && ((curY + y) > 0 && (curY + y) <= maxY);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll maxX, maxY, inX, inY, k, curX, curY, steps = 0;
    cin >> maxX >> maxY >> inX >> inY >> k;
    curX = inX;
    curY = inY;
    for (ll i = 0; i < k; i++) {
        ll x, y, tmpX, tmpY;
        cin >> x >> y;

        if (x > 0) {
            tmpX = (maxX - curX) / x;
        } else if (x < 0) {
            ll X = maxX - curX + 1;
            tmpX = (maxX - X) / abs(x);
        } else {
            tmpX = LONG_LONG_MAX;
        }

        if (y > 0) {
            tmpY = (maxY - curY) / y;
        } else if (y < 0) {
            ll Y = maxY - curY + 1;
            tmpY = (maxY - Y) / abs(y);
        } else {
            tmpY = LONG_LONG_MAX;
        }

        steps += min(tmpX, tmpY);
        curX += min(tmpX, tmpY) * x;
        curY += min(tmpX, tmpY) * y;

        // while (isValid(curX, curY, x, y, maxX, maxY)) {
        //     curX += x;
        //     curY += y;
        //     steps++;
        // }
    }
    cout << steps;

    return 0;
}