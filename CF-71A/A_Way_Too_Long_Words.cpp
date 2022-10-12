#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while(n--){
        string x;
        cin >> x;
        if (x.size() < 11){
            cout << x << "\n";
        }else{
            cout << x[0] << x.size()-2 << x[x.size()-1] << "\n";
        }
    }
    return 0;
}