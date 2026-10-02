# [Topic/Pattern]: Unique Number of Occurrences (LeetCode 1207)

## Code

```cpp
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> count;
        for (int x : arr) {
            count[x]++;
        }

        unordered_set<int> freqSet;
        for (const auto& [_, freq] : count) {
            if (!freqSet.insert(freq).second) {
                return false;
            }
        }

        return true;
    }
};
```
