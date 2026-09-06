# [Topic/Pattern]: Find the Most Competitive Subsequence (LeetCode 1673)

## Code

```cpp
class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int> res;
        int n = nums.size();
        
        for (int i = 0; i < n; ++i) {
            while (!res.empty() && res.back() > nums[i] && (res.size() - 1 + n - i) >= k) {
                res.pop_back();
            }
            if (res.size() < k) {
                res.push_back(nums[i]);
            }
        }
        
        return res;
    }
};
```
