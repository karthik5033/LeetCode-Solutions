# [Topic/Pattern]: Number of Zero-Filled Subarrays (LeetCode 2348)

## Code

```cpp
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long total = 0;
        long long currentStreak = 0;

        for (int num : nums) {
            if (num == 0) {
                currentStreak++;
                total += currentStreak;
            } else {
                currentStreak = 0;
            }
        }

        return total;
    }
};
```
