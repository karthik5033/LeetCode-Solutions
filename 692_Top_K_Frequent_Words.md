# [Topic/Pattern]: Top K Frequent Words (LeetCode 692)

## Code

```cpp
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;
        for (const string& word : words) {
            freq[word]++;
        }
        
        auto comp = [](const pair<int, string>& a, const pair<int, string>& b) {
            if (a.first != b.first) {
                return a.first > b.first;
            }
            return a.second < b.second;
        };
        
        priority_queue<pair<int, string>, vector<pair<int, string>>, decltype(comp)> pq(comp);
        
        for (auto& [word, count] : freq) {
            pq.push({count, word});
            if (pq.size() > k) {
                pq.pop();
            }
        }
        
        vector<string> res(k);
        for (int i = k - 1; i >= 0; --i) {
            res[i] = pq.top().second;
            pq.pop();
        }
        return res;
    }
};
```
