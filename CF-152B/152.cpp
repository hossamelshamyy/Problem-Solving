#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int maxX, maxY, inX, inY, k, curX, curY, steps = 0;
    cin >> maxX >> maxY >> inX >> inY >> k;
    curX = inX;
    curY = inY;
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;

        if ((curX >= 0 && curX <= maxX) && (curY >= 0 && curY <= maxY)) {
            steps += abs(x) + curX;
            steps += abs(y) + curY;
        } else {
            curX -= x;
            curY -= y;
        }
    }
    cout << steps;

    return 0;
}