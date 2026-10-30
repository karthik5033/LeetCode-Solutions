# [Topic/Pattern]: Split a String in Balanced Strings (LeetCode 1221)

## Code

```cpp
class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int balance = 0;

        for (char c : s) {
            if (c == 'R') {
                balance++;
            } else if (c == 'L') {
                balance--;
            }

            if (balance == 0) {
                count++;
            }
        }

        return count;
    }
};
```
