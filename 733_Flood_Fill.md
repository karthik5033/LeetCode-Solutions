# [Topic/Pattern]: Flood Fill (LeetCode 733)

## Code

```cpp
class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c, int initColor, int newColor) {
        if (r < 0 || r >= image.size() || c < 0 || c >= image[0].size() || image[r][c] != initColor) {
            return;
        }
        image[r][c] = newColor;
        dfs(image, r + 1, c, initColor, newColor);
        dfs(image, r - 1, c, initColor, newColor);
        dfs(image, r, c + 1, initColor, newColor);
        dfs(image, r, c - 1, initColor, newColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initColor = image[sr][sc];
        if (initColor != color) {
            dfs(image, sr, sc, initColor, color);
        }
        return image;
    }
};
```
