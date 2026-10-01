# [Topic/Pattern]: Final Array State After K Multiplication Operations I (LeetCode 3264)

## Code

```cpp
class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        using P = pair<int, int>;
        priority_queue<P, vector<P>, greater<P>> pq;
        for (int i = 0; i < nums.size(); ++i) {
            pq.push({nums[i], i});
        }
        while (k--) {
            auto [val, idx] = pq.top();
            pq.pop();
            nums[idx] = val * multiplier;
            pq.push({nums[idx], idx});
        }
        return nums;
    }
};
```
