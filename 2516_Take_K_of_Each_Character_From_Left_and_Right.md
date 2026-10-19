# [Topic/Pattern]: Take K of Each Character From Left and Right (LeetCode 2516)

## Code

```cpp
class Solution {
public:
    int takeCharacters(string s, int k) {
        int n = s.length();
        vector<int> count(3, 0);
        for (char c : s) {
            count[c - 'a']++;
        }

        for (int i = 0; i < 3; i++) {
            if (count[i] < k) return -1;
        }

        vector<int> target = {count[0] - k, count[1] - k, count[2] - k};
        vector<int> window(3, 0);
        int maxWindow = 0, left = 0;

        for (int right = 0; right < n; right++) {
            window[s[right] - 'a']++;

            while (window[s[right] - 'a'] > target[s[right] - 'a']) {
                window[s[left] - 'a']--;
                left++;
            }

            maxWindow = max(maxWindow, right - left + 1);
        }

        return n - maxWindow;
    }
};
```
