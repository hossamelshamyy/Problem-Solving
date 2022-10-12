#include <iostream>
#include <map>
typedef long long ll;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
try{

}catch(int e){

}
    int n, m, lx = 0, ly = 0;
    cin >> n >> m;
    int sum = 0;

    map<int, int> mp;
    for (int i = 0; i < m; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        mp[y] += z;

        if ((mp[x] - z) >= 0) {
            mp[x] -= z;
        }
    }
    // bool isCont = false;
    // for (auto x : mp) {
    //     if (sum < x.second) {
    //         sum = x.second;
    //         isCont = true;
    //     } else if (x.second < 0) {
    //         sum -= x.second;
    //     }
    // }
    // int = largest 
    for (auto x : mp) {
        sum += x.second;
    }

    cout << sum;
    return 0;
}