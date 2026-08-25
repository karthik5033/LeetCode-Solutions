# [Topic/Pattern]: Minimum Window Substring (LeetCode 76)

## Code

```cpp
class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> map;
        for (char c : t) map[c]++;
        int left = 0, right = 0, required = t.length(), minLen = INT_MAX, minStart = 0;
        while (right < s.length()) {
            if (map[s[right]] > 0) required--;
            map[s[right]]--;
            right++;
            while (required == 0) {
                if (right - left < minLen) {
                    minLen = right - left;
                    minStart = left;
                }
                map[s[left]]++;
                if (map[s[left]] > 0) required++;
                left++;
            }
        }
        return minLen == INT_MAX ? "" : s.substr(minStart, minLen);
    }
};
```
