# [Topic/Pattern]: Check If a String Contains All Binary Codes of Size K (LeetCode 1461)

## Code

```cpp
class Solution {
public:
    bool hasAllCodes(string s, int k) {
        int total = 1 << k;
        if (s.size() < total + k - 1) return false;

        vector<bool> seen(total, false);
        int mask = 0;
        int allOnes = total - 1;
        int count = 0;

        for (int i = 0; i < s.size(); i++) {
            mask = ((mask << 1) & allOnes) | (s[i] - '0');
            if (i >= k - 1) {
                if (!seen[mask]) {
                    seen[mask] = true;
                    count++;
                    if (count == total) return true;
                }
            }
        }

        return count == total;
    }
};
```
