# [Topic/Pattern]: Substrings of Size Three with Distinct Characters (LeetCode 1876)

## Code

```cpp
class Solution {
public:
    int countGoodSubstrings(string s) {
        int count = 0;
        int n = s.length();

        for (int i = 0; i + 2 < n; i++) {
            if (s[i] != s[i + 1] && s[i] != s[i + 2] && s[i + 1] != s[i + 2]) {
                count++;
            }
        }

        return count;
    }
};
```
