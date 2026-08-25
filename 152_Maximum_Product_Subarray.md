# [Topic/Pattern]: Maximum Product Subarray (LeetCode 152)

## Code

```cpp
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.empty()) return 0;
        int max_prod = nums[0], min_prod = nums[0], res = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] < 0) swap(max_prod, min_prod);
            max_prod = max(nums[i], max_prod * nums[i]);
            min_prod = min(nums[i], min_prod * nums[i]);
            res = max(res, max_prod);
        }
        return res;
    }
};
```
