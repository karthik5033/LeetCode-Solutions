# [Topic/Pattern]: Relative Sort Array (LeetCode 1122)

## Code

```cpp
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> count;
        for (int x : arr1) {
            count[x]++;
        }

        vector<int> result;
        for (int x : arr2) {
            while (count[x] > 0) {
                result.push_back(x);
                count[x]--;
            }
            count.erase(x);
        }

        for (const auto& [x, freq] : count) {
            for (int i = 0; i < freq; ++i) {
                result.push_back(x);
            }
        }

        return result;
    }
};
```
