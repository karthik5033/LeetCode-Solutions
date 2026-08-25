# [Topic/Pattern]: Find the Index of the First Occurrence in a String (LeetCode 28)

## Code

```cpp
class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        int m = haystack.length(), n = needle.length();
        if (m < n) return -1;
        for (int i = 0; i <= m - n; i++) {
            int j;
            for (j = 0; j < n; j++) {
                if (haystack[i + j] != needle[j]) break;
            }
            if (j == n) return i;
        }
        return -1;
    }
};
```
