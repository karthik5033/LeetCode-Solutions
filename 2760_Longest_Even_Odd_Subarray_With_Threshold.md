# [Topic/Pattern]: Longest Even Odd Subarray With Threshold (LeetCode 2760)

## Code

```cpp
class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n = nums.size();
        int maxLen = 0;
        int i = 0;

        while (i < n) {
            if (nums[i] % 2 == 0 && nums[i] <= threshold) {
                int start = i;
                while (i + 1 < n && nums[i + 1] <= threshold && (nums[i] % 2 != nums[i + 1] % 2)) {
                    i++;
                }
                maxLen = max(maxLen, i - start + 1);
            }
            i++;
        }

        return maxLen;
    }
};
```
