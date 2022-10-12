#include <bits/stdc++.h>

#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if (s1.size() + s2.size() != s3.size()) {
        cout << "NO";
        return 0;
    } else {
        int found = 0;
        for (int i = 0; i < s1.size(); i++) {
            if (s3.find(s1[i]) != std::string::npos) {
                ++found;
                s3.erase(s3.find(s1[i]),1);
            }
        }
        if (found != s1.size()) {
            cout << "NO";
            return 0;
        }
        found = 0;
        for (int i = 0; i < s2.size(); i++) {
            if (s3.find(s2[i]) != std::string::npos) {
                ++found;
                s3.erase(s3.find(s2[i]),1);
            }
        }
        if (found != s2.size()) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
