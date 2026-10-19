# [Topic/Pattern]: Length of the Longest Alphabetical Continuous Substring (LeetCode 2414)

## Code

```cpp
class Solution {
public:
    int longestContinuousSubstring(string s) {
        int maxLen = 1, curLen = 1;

        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1] + 1) {
                curLen++;
            } else {
                curLen = 1;
            }
            maxLen = max(maxLen, curLen);
        }

        return maxLen;
    }
};
```
