# [Topic/Pattern]: Count and Say (LeetCode 38)

## Code

```cpp
class Solution {
public:
    string countAndSay(int n) {
        if (n <= 0) return "";
        string res = "1";

        for (int i = 2; i <= n; i++) {
            string nextRes = "";
            int len = res.length();
            int count = 1;

            for (int j = 1; j < len; j++) {
                if (res[j] == res[j - 1]) {
                    count++;
                } else {
                    nextRes += to_string(count) + res[j - 1];
                    count = 1;
                }
            }
            nextRes += to_string(count) + res.back();
            res = nextRes;
        }

        return res;
    }
};
```
