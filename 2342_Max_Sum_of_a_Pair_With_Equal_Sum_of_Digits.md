# [Topic/Pattern]: Max Sum of a Pair With Equal Sum of Digits (LeetCode 2342)

## Code

```cpp
class Solution {
public:
    int maximumSum(vector<int>& nums) {
        auto getDigitSum = [](int n) {
            int sum = 0;
            while (n > 0) {
                sum += n % 10;
                n /= 10;
            }
            return sum;
        };

        unordered_map<int, int> maxNum;
        int maxPairSum = -1;

        for (int num : nums) {
            int dSum = getDigitSum(num);
            if (maxNum.count(dSum)) {
                maxPairSum = max(maxPairSum, maxNum[dSum] + num);
                maxNum[dSum] = max(maxNum[dSum], num);
            } else {
                maxNum[dSum] = num;
            }
        }

        return maxPairSum;
    }
};
```
