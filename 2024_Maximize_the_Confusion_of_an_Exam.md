# [Topic/Pattern]: Maximize the Confusion of an Exam (LeetCode 2024)

## Code

```cpp
class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        auto maxLenForChar = [&](char target) {
            int left = 0, countDiff = 0, maxLen = 0;
            for (int right = 0; right < answerKey.length(); right++) {
                if (answerKey[right] != target) {
                    countDiff++;
                }
                while (countDiff > k) {
                    if (answerKey[left] != target) {
                        countDiff--;
                    }
                    left++;
                }
                maxLen = max(maxLen, right - left + 1);
            }
            return maxLen;
        };

        return max(maxLenForChar('T'), maxLenForChar('F'));
    }
};
```
