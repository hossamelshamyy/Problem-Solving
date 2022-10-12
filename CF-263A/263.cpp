#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x = 5, y = 5;
    int a,b;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            int q;
            cin >> q;
            if(q == 1){
                a = i;
                b = j;
            }
        }
    }

    cout << (abs(a - 2)+abs(b - 2));

    return 0;
}