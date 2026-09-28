# [Topic/Pattern]: Task Scheduler (LeetCode 621)

## Code

```cpp
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> freq;
        for (char c : tasks) freq[c]++;
        priority_queue<int> pq;
        for (auto& p : freq) pq.push(p.second);
        int time = 0;
        while (!pq.empty()) {
            vector<int> temp;
            int count = 0;
            for (int i = 0; i <= n; ++i) {
                if (!pq.empty()) {
                    temp.push_back(pq.top() - 1);
                    pq.pop();
                    count++;
                }
            }
            for (int f : temp) {
                if (f > 0) pq.push(f);
            }
            time += pq.empty() ? count : n + 1;
        }
        return time;
    }
};
```
