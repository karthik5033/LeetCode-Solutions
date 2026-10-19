# [Topic/Pattern]: Minimum Recolors to Get K Consecutive Black Blocks (LeetCode 2379)

## Code

```cpp
class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int whiteCount = 0;
        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W') whiteCount++;
        }

        int minOps = whiteCount;
        for (int i = k; i < blocks.length(); i++) {
            if (blocks[i] == 'W') whiteCount++;
            if (blocks[i - k] == 'W') whiteCount--;
            minOps = min(minOps, whiteCount);
        }

        return minOps;
    }
};
```
