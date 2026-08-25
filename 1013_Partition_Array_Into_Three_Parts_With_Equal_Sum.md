# [Topic/Pattern]: Partition Array Into Three Parts With Equal Sum (LeetCode 1013)

## Code

```cpp
class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum = 0;
        for (int num : arr) sum += num;
        if (sum % 3 != 0) return false;
        
        int target = sum / 3;
        int parts = 0;
        int currentSum = 0;
        
        for (int num : arr) {
            currentSum += num;
            if (currentSum == target) {
                parts++;
                currentSum = 0;
            }
        }
        
        return parts >= 3;
    }
};
```
