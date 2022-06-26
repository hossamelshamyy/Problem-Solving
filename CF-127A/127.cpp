#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin >> n >> k;

    int lX = 0,lY = 0,X = 0,Y = 0;
    float result = 0;
    
    for (uint8_t i = 0; i < n; i++)
    {
        lX = X;
        lY = Y;
        cin >> X >> Y;
        if(i == 0){
            continue;
        }
        result += sqrt(pow(lX-X,2)+pow(lY-Y,2));
    }

    result *= k;
    result /= 50;
    cout << setprecision(9);
    cout << result;
    
    
    return 0;
}