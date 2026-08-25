# [Topic/Pattern]: Final Prices With a Special Discount in a Shop (LeetCode 1475)

## Code

```cpp
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> s;
        for (int i = 0; i < prices.size(); i++) {
            while (!s.empty() && prices[s.top()] >= prices[i]) {
                prices[s.top()] -= prices[i];
                s.pop();
            }
            s.push(i);
        }
        return prices;
    }
};
```
