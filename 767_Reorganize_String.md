# [Topic/Pattern]: Reorganize String (LeetCode 767)

## Code

```cpp
class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int> freq;
        for (char c : s) freq[c]++;
        priority_queue<pair<int, char>> pq;
        for (auto& p : freq) pq.push({p.second, p.first});
        string res = "";
        while (pq.size() > 1) {
            auto top1 = pq.top(); pq.pop();
            auto top2 = pq.top(); pq.pop();
            res += top1.second;
            res += top2.second;
            if (--top1.first > 0) pq.push(top1);
            if (--top2.first > 0) pq.push(top2);
        }
        if (!pq.empty()) {
            if (pq.top().first > 1) return "";
            res += pq.top().second;
        }
        return res;
    }
};
```
