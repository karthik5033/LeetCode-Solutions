# [Topic/Pattern]: Count Complete Subarrays in an Array (LeetCode 2799)

## Code

```cpp
class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        unordered_set<int> uniqueElements(nums.begin(), nums.end());
        int totalDistinct = uniqueElements.size();

        unordered_map<int, int> freq;
        int count = 0;
        int left = 0;
        int n = nums.size();

        for (int right = 0; right < n; right++) {
            freq[nums[right]]++;

            while (freq.size() == totalDistinct) {
                count += (n - right);
                freq[nums[left]]--;
                if (freq[nums[left]] == 0) {
                    freq.erase(nums[left]);
                }
                left++;
            }
        }

        return count;
    }
};
```
