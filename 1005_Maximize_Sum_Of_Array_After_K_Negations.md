# [Topic/Pattern]: Maximize Sum Of Array After K Negations (LeetCode 1005)

## Code

```cpp
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() && k > 0; i++) {
            if (nums[i] < 0) {
                nums[i] = -nums[i];
                k--;
            }
        }

        int sum = 0;
        int minVal = INT_MAX;
        for (int num : nums) {
            sum += num;
            minVal = min(minVal, num);
        }

        if (k % 2 == 1) {
            sum -= 2 * minVal;
        }

        return sum;
    }
};
```
