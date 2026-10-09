# [Topic/Pattern]: Word Ladder (LeetCode 127)

## Code

```cpp
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> dict(wordList.begin(), wordList.end());
        if (!dict.count(endWord)) return 0;

        queue<pair<string, int>> q;
        q.push({beginWord, 1});
        dict.erase(beginWord);

        while (!q.empty()) {
            auto [word, len] = q.front();
            q.pop();

            if (word == endWord) return len;

            for (int i = 0; i < word.size(); i++) {
                char original = word[i];
                for (char c = 'a'; c <= 'z'; c++) {
                    word[i] = c;
                    if (dict.count(word)) {
                        dict.erase(word);
                        q.push({word, len + 1});
                    }
                }
                word[i] = original;
            }
        }

        return 0;
    }
};
```
