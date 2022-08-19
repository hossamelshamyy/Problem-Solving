#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n, q;

    cin >> n >> q;
    vector<long> a;
    for (long i = 0; i < n; i++) {
        long x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.rbegin(), a.rend());

    vector<long> fr(n+1, 0);
    for (long i = 0; i < q; i++) {
        long x, y;
        cin >> x >> y;
        fr[x - 1] += 1;
        fr[y] -= 1;
    }
    
    vector<long> sum(n, 0);

    for (int i = 0; i < sum.size(); i++) {
        if (i == 0) {
            sum[i] = fr[0];
        } else {
            sum[i] = fr[i] + sum[i - 1];
        }
    }
    long long ans = 0;
    sort(sum.rbegin(), sum.rend());
    for (long i = 0; i < a.size(); i++) {
        ans += (long long) a[i] * sum[i];
    }

    cout << ans  ;

    return 0;
}