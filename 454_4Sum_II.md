# [Topic/Pattern]: 4Sum II (LeetCode 454)

## Code

```cpp
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> sumCount;
        for (int a : nums1) {
            for (int b : nums2) {
                sumCount[a + b]++;
            }
        }

        int count = 0;
        for (int c : nums3) {
            for (int d : nums4) {
                int target = -(c + d);
                auto it = sumCount.find(target);
                if (it != sumCount.end()) {
                    count += it->second;
                }
            }
        }

        return count;
    }
};
```
