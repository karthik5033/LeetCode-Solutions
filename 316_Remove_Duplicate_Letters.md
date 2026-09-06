# [Topic/Pattern]: Remove Duplicate Letters (LeetCode 316)

## Code

```cpp
class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> lastIndex(26, 0);
        vector<bool> seen(26, false);
        string res = "";
        
        for (int i = 0; i < s.length(); ++i) {
            lastIndex[s[i] - 'a'] = i;
        }
        
        for (int i = 0; i < s.length(); ++i) {
            char c = s[i];
            if (seen[c - 'a']) continue;
            
            while (!res.empty() && res.back() > c && lastIndex[res.back() - 'a'] > i) {
                seen[res.back() - 'a'] = false;
                res.pop_back();
            }
            
            res.push_back(c);
            seen[c - 'a'] = true;
        }
        
        return res;
    }
};
```
