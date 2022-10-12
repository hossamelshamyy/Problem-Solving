#include <bits/stdc++.h>

#include <iostream>

using namespace std;
#define M_PI 3.14159265358979323846
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    float d, h, v, e;
    cin >> d >> h >> v >> e;
    float r = d / 2;

    float nom = M_PI * pow(r, 2) * h * 1.0;
    float don = v * 1.0 - (M_PI * pow(r, 2) * e) * 1.0;
    if (fabs(don - 0) <= 1e-5 || (nom / don) <= 0) {
        cout << "NO";
    } else {
        cout << "YES\n";
        cout << setprecision(12);
        cout << nom / don;
    }
    return 0;
}