# [Topic/Pattern]: Delete Greatest Value in Each Row (LeetCode 2500)

## Code

```cpp
class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for (auto& row : grid) {
            sort(row.begin(), row.end());
        }
        int ans = 0;
        int m = grid.size(), n = grid[0].size();
        for (int j = 0; j < n; ++j) {
            int maxVal = 0;
            for (int i = 0; i < m; ++i) {
                maxVal = max(maxVal, grid[i][j]);
            }
            ans += maxVal;
        }
        return ans;
    }
};
```
