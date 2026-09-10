# [Topic/Pattern]: Asteroid Collision (LeetCode 735)

## Code

```cpp
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;
        for (int a : asteroids) {
            bool exploded = false;
            while (!st.empty() && st.back() > 0 && a < 0) {
                if (st.back() < -a) {
                    st.pop_back();
                    continue;
                } else if (st.back() == -a) {
                    st.pop_back();
                    exploded = true;
                    break;
                } else {
                    exploded = true;
                    break;
                }
            }
            if (!exploded) {
                st.push_back(a);
            }
        }
        return st;
    }
};
```
