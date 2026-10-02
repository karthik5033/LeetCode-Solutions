# [Topic/Pattern]: Longest Harmonious Subsequence (LeetCode 594)

## Code

```cpp
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }

        int maxLen = 0;
        for (const auto& [num, freq] : count) {
            if (count.count(num + 1)) {
                maxLen = max(maxLen, freq + count[num + 1]);
            }
        }

        return maxLen;
    }
};
```
