# [Topic/Pattern]: Longest Nice Subarray (LeetCode 2401)

## Code

```cpp
class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int left = 0, usedBits = 0, maxLen = 0;

        for (int right = 0; right < nums.size(); right++) {
            while ((usedBits & nums[right]) != 0) {
                usedBits ^= nums[left];
                left++;
            }
            usedBits |= nums[right];
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
```
