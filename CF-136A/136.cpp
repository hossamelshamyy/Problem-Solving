#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n+1] = {0};
    for (int i = 1; i <= n; i++)
    {   
        int x;
        cin >> x;

        arr[x] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << ' ' ;
    }
    
    
    return 0;
}