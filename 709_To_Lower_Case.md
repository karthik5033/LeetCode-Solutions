# [Topic/Pattern]: To Lower Case (LeetCode 709)

## Code

```cpp
class Solution {
public:
    string toLowerCase(string s) {
        for (char& c : s) {
            if (c >= 'A' && c <= 'Z') c += 32;
        }
        return s;
    }
};
```
