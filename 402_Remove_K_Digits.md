# [Topic/Pattern]: Remove K Digits (LeetCode 402)

## Code

```cpp
class Solution {
public:
    string removeKdigits(string num, int k) {
        string res = "";
        for (char c : num) {
            while (!res.empty() && res.back() > c && k > 0) {
                res.pop_back();
                k--;
            }
            if (!res.empty() || c != '0') {
                res.push_back(c);
            }
        }
        
        while (!res.empty() && k > 0) {
            res.pop_back();
            k--;
        }
        
        return res.empty() ? "0" : res;
    }
};
```
