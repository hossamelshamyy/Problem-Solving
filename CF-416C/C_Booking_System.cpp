#include <bits/stdc++.h>

#include <iostream>

using namespace std;
// How to compare elements
struct my_comparator {
    // queue elements are vectors so we need to compare those
    bool operator()(std::vector<int> const& a, std::vector<int> const& b) const {
        // sanity checks
        assert(a.size() == 3);
        assert(b.size() == 3);

        // reverse sort puts the largest value at the top
        return a[1] <= b[1];
    }
};

// for usability wrap this up in a type alias:
using my_priority_queue = std::priority_queue<std::vector<int>, std::vector<std::vector<int>>, my_comparator>;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    my_priority_queue q;

    int i = 0;
    while (n--) {
        ++i;
        int x, y;
        cin >> x >> y;
        q.push({x, y, i});
    }

    int k;
    cin >> k;
    vector<int> tables;
    while (k--) {
        int x;
        cin >> x;
        tables.push_back(x);
    }
    vector<int> tables_non_sorted(tables);
    sort(tables.begin(), tables.end());
    int acc = 0, mon = 0;
    vector<int> acc_tables;
    vector<int> acc_seats;
    while (q.size() > 0) {
        auto k = find(tables.begin(), tables.end(), q.top()[0]);
        if (k == end(tables))
            k = upper_bound(tables.begin(), tables.end(), q.top()[0]);
        if (k != end(tables)) {
            ++acc;
            mon += q.top()[1];
            acc_tables.push_back(q.top()[2]);
            acc_seats.push_back(find(tables_non_sorted.begin(), tables_non_sorted.end(), *k) - tables_non_sorted.begin() + 1);
            tables_non_sorted[find(tables_non_sorted.begin(), tables_non_sorted.end(), *k) - tables_non_sorted.begin()] = -1;
            tables.erase(find(tables.begin(), tables.end(), *k));
        }
        q.pop();
    }

    cout << acc << " " << mon << "\n";
    for (int i = 0; i < acc_seats.size(); i++) {
        cout << acc_tables[i] << " " << acc_seats[i] << "\n";
    }
    return 0;
}