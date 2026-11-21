# [Topic/Pattern]: Assign Umbrella on Rainy Days (LeetCode 4116)

## Code

```cpp
class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        vector<string> ans;
        int n = rain.size();
        int alice = 0;
        int bob = 0;

        for (int i = 0; i < n - 1; i++) {
            if (rain[i] == 1 && rain[i + 1] == 1) {
                if (alice <= bob) {
                    ans.push_back("Alice");
                    alice++;
                } else {
                    ans.push_back("Bob");
                    bob++;
                }
            } else if (rain[i] == 1 && rain[i + 1] == 0) {
                ans.push_back("Bob");
                bob++;
            }
        }

        if (n > 0 && rain[n - 1] == 1) {
            ans.push_back("Bob");
            bob++;
        }

        return ans;
    }
};
```
