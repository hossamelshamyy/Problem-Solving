#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int a = 0;
    int d = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;

        if (x == 'A')
        {
            a += 1;
        }
        else if (x == 'D')
        {
            d += 1;
        }
    }

    if (a > d)
    {
        cout << "Anton";
    }
    else if (d > a)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }

    return 0;
}