# [Topic/Pattern]: Removing Stars From a String (LeetCode 2390)

## Code

```cpp
class Solution {
public:
    string removeStars(string s) {
        string res = "";
        for (char c : s) {
            if (c == '*') res.pop_back();
            else res.push_back(c);
        }
        return res;
    }
};
```
