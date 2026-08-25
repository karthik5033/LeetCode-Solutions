# [Topic/Pattern]: Largest Rectangle in Histogram (LeetCode 84)

## Code

```cpp
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        int max_area = 0;
        heights.push_back(0);
        for (int i = 0; i < heights.size(); i++) {
            while (!s.empty() && heights[s.top()] >= heights[i]) {
                int h = heights[s.top()];
                s.pop();
                int w = s.empty() ? i : i - s.top() - 1;
                max_area = max(max_area, h * w);
            }
            s.push(i);
        }
        return max_area;
    }
};
```
