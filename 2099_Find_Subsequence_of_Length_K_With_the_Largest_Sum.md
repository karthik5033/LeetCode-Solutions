# [Topic/Pattern]: Find Subsequence of Length K With the Largest Sum (LeetCode 2099)

## Code

```cpp
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int, int>> v;
        for (int i = 0; i < nums.size(); ++i) {
            v.push_back({nums[i], i});
        }
        sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first > b.first;
        });
        v.resize(k);
        sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second;
        });
        vector<int> res;
        for (const auto& p : v) {
            res.push_back(p.first);
        }
        return res;
    }
};
```
