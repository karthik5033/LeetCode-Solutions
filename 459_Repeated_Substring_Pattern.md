# [Topic/Pattern]: Repeated Substring Pattern (LeetCode 459)

## Code

```cpp
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string str = s + s;
        return str.substr(1, str.length() - 2).find(s) != string::npos;
    }
};
```
