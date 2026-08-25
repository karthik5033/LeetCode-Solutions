# [Topic/Pattern]: Reverse Words in a String III (LeetCode 557)

## Code

```cpp
class Solution {
public:
    string reverseWords(string s) {
        int i = 0, j = 0;
        while (j < s.length()) {
            while (j < s.length() && s[j] != ' ') j++;
            reverse(s.begin() + i, s.begin() + j);
            i = j + 1;
            j = i;
        }
        return s;
    }
};
```
