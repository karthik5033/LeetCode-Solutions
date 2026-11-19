# [Topic/Pattern]: Continuous Subarray Sum (LeetCode 523)

## Code

```cpp
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> remainderIndex;
        remainderIndex[0] = -1;

        int prefixMod = 0;
        for (int i = 0; i < nums.size(); i++) {
            prefixMod = (prefixMod + nums[i]) % k;

            if (remainderIndex.count(prefixMod)) {
                if (i - remainderIndex[prefixMod] >= 2) {
                    return true;
                }
            } else {
                remainderIndex[prefixMod] = i;
            }
        }

        return false;
    }
};
```
