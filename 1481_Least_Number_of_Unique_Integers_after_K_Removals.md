# [Topic/Pattern]: Least Number of Unique Integers after K Removals (LeetCode 1481)

## Code

```cpp
class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> count;
        for (int num : arr) {
            count[num]++;
        }

        vector<int> freqs;
        for (const auto& [_, freq] : count) {
            freqs.push_back(freq);
        }

        sort(freqs.begin(), freqs.end());

        int uniqueCount = freqs.size();
        for (int freq : freqs) {
            if (k >= freq) {
                k -= freq;
                uniqueCount--;
            } else {
                break;
            }
        }

        return uniqueCount;
    }
};
```
