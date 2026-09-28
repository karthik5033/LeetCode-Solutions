# [Topic/Pattern]: Relative Ranks (LeetCode 506)

## Code

```cpp
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> pq;
        for (int i = 0; i < score.size(); ++i) {
            pq.push({score[i], i});
        }
        vector<string> res(score.size());
        int rank = 1;
        while (!pq.empty()) {
            int idx = pq.top().second;
            pq.pop();
            if (rank == 1) res[idx] = "Gold Medal";
            else if (rank == 2) res[idx] = "Silver Medal";
            else if (rank == 3) res[idx] = "Bronze Medal";
            else res[idx] = to_string(rank);
            rank++;
        }
        return res;
    }
};
```
