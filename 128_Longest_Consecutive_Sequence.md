# [Topic/Pattern]: Longest Consecutive Sequence (LeetCode 128)

## Code

```cpp
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;
        for (int num : numSet) {
            if (!numSet.count(num - 1)) {
                int curr = num, len = 1;
                while (numSet.count(curr + 1)) {
                    curr++; len++;
                }
                longest = max(longest, len);
            }
        }
        return longest;
    }
};
```
