# [Topic/Pattern]: Minimum Size Subarray Sum (LeetCode 209)

## Code

```cpp
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int currentSum = 0;
        int minLen = INT_MAX;

        for (int right = 0; right < n; right++) {
            currentSum += nums[right];

            while (currentSum >= target) {
                minLen = min(minLen, right - left + 1);
                currentSum -= nums[left++];
            }
        }

        return minLen == INT_MAX ? 0 : minLen;
    }
};
```
