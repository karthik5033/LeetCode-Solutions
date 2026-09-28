# [Topic/Pattern]: Take Gifts From the Richest Pile (LeetCode 2558)

## Code

```cpp
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq(gifts.begin(), gifts.end());
        while (k > 0) {
            int top = pq.top();
            pq.pop();
            pq.push(sqrt(top));
            k--;
        }
        long long sum = 0;
        while (!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    }
};
```
