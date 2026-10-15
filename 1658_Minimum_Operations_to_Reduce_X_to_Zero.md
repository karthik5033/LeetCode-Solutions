# [Topic/Pattern]: Minimum Operations to Reduce X to Zero (LeetCode 1658)

## Code

```cpp
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int totalSum = 0;
        for (int num : nums) totalSum += num;

        int target = totalSum - x;
        if (target < 0) return -1;
        if (target == 0) return nums.size();

        int left = 0, curSum = 0;
        int maxLen = -1;

        for (int right = 0; right < nums.size(); right++) {
            curSum += nums[right];

            while (curSum > target && left <= right) {
                curSum -= nums[left++];
            }

            if (curSum == target) {
                maxLen = max(maxLen, right - left + 1);
            }
        }

        return maxLen == -1 ? -1 : nums.size() - maxLen;
    }
};
```
