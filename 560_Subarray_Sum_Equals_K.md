# [Topic/Pattern]: Subarray Sum Equals K (LeetCode 560)

## Code

```cpp
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixSumCount;
        prefixSumCount[0] = 1;
        int currentSum = 0;
        int count = 0;

        for (int num : nums) {
            currentSum += num;
            if (prefixSumCount.count(currentSum - k)) {
                count += prefixSumCount[currentSum - k];
            }
            prefixSumCount[currentSum]++;
        }

        return count;
    }
};
```
