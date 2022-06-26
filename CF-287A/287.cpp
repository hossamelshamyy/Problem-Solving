#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int8_t arr[4][4];
    for (uint8_t i = 0; i < 4; i++) {
        for (uint8_t j = 0; j < 4; j++) {
            char x;
            cin >> x;
            if (x == '#')
                arr[i][j] = 1;
            else if (x == '.')
                arr[i][j] = -1;
        }
    }

    for (uint8_t i = 0; i < 3; i++) {
        for (uint8_t j = 0; j < 3; j++) {
            int8_t a = arr[i][j] + arr[i + 1][j] + arr[i][j + 1] + arr[i + 1][j + 1];
            if (abs(a) == 2 || abs(a) == 4) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";

    return 0;
}