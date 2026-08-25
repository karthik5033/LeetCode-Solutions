# [Topic/Pattern]: Remove All Adjacent Duplicates In String (LeetCode 1047)

## Code

```cpp
class Solution {
public:
    string removeDuplicates(string s) {
        string res = "";
        for (char c : s) {
            if (!res.empty() && res.back() == c) res.pop_back();
            else res.push_back(c);
        }
        return res;
    }
};
```
