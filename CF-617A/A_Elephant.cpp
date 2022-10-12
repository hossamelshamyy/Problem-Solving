#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> x;
    int steps = x / 5;
    x -= (x/5)*5; 

    steps += x / 4;
    x -= (x/4)*4;

    steps += x / 3;
    x -= (x/3)*3;

    steps += x / 2;
    x -= (x/2)*2;

    steps += x / 1;
    x -= (x/1)*1;
    
    cout << steps << "\n";
    return 0;
}