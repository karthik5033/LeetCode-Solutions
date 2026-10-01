# [Topic/Pattern]: Make Array Zero by Subtracting Equal Amounts (LeetCode 2357)

## Code

```cpp
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> unique_positives;
        for (int num : nums) {
            if (num > 0) {
                unique_positives.insert(num);
            }
        }
        return unique_positives.size();
    }
};
```
