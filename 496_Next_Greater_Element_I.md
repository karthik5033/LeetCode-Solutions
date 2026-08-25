# [Topic/Pattern]: Next Greater Element I (LeetCode 496)

## Code

```cpp
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        stack<int> s;
        for (int num : nums2) {
            while (!s.empty() && s.top() < num) {
                map[s.top()] = num;
                s.pop();
            }
            s.push(num);
        }
        vector<int> res;
        for (int num : nums1) res.push_back(map.count(num) ? map[num] : -1);
        return res;
    }
};
```
