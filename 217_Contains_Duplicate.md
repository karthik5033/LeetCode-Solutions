# [Topic/Pattern]: Contains Duplicate (LeetCode 217)

## Code

```cpp
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s(nums.begin(), nums.end());
        return s.size() < nums.size();
    }
};
```
