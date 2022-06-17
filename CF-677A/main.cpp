#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);


    int n,h;

    cin >> n  >> h;

    int output = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x > h){
            output += 2;
        }else{
            output += 1;
        }

    }

    cout << output;
    return 0;
}
