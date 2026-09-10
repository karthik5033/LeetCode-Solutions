# [Topic/Pattern]: Top K Frequent Elements (LeetCode 347)

## Code

```cpp
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for (int num : nums) {
            freq[num]++;
        }
        
        int n = nums.size();
        vector<vector<int>> buckets(n + 1);
        for (auto& [val, count] : freq) {
            buckets[count].push_back(val);
        }
        
        vector<int> res;
        for (int i = n; i >= 0 && res.size() < k; --i) {
            for (int val : buckets[i]) {
                res.push_back(val);
                if (res.size() == k) break;
            }
        }
        return res;
    }
};
```
