# [Topic/Pattern]: Group Anagrams (LeetCode 49)

## Code

```cpp
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for (string s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            map[key].push_back(s);
        }
        vector<vector<string>> res;
        for (auto p : map) res.push_back(p.second);
        return res;
    }
};
```
