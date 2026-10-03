#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {
        1, 1, 1, 2, 2, 3
    };

    int k = 2;

    unordered_map<int, int> freq;

    for (int x : nums)
        freq[x]++;

    priority_queue<pair<int, int>> pq;

    for (auto& p : freq)
        pq.push({p.second, p.first});

    cout << "Top " << k << " Frequent Elements: ";

    while (k-- && !pq.empty()) {
        cout << pq.top().second << " ";
        pq.pop();
    }

    return 0;
}
