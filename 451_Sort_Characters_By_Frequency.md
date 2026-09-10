# [Topic/Pattern]: Sort Characters By Frequency (LeetCode 451)

## Code

```cpp
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        
        int n = s.length();
        vector<vector<char>> buckets(n + 1);
        for (auto& [c, count] : freq) {
            buckets[count].push_back(c);
        }
        
        string res = "";
        for (int i = n; i > 0; --i) {
            for (char c : buckets[i]) {
                res.append(i, c);
            }
        }
        return res;
    }
};
```
