# [Topic/Pattern]: Intersection of Two Arrays II (LeetCode 350)

## Code

```cpp
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> counts;
        for (int num : nums1) counts[num]++;
        vector<int> res;
        for (int num : nums2) {
            if (counts[num] > 0) {
                res.push_back(num);
                counts[num]--;
            }
        }
        return res;
    }
};
```
