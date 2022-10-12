#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,result = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a,b,c;
        cin >> a >> b >> c;
        if (a+b+c >=2) result+=1;
    }
    cout << result;
    return 0;
}