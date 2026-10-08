# [Topic/Pattern]: Word Ladder II (LeetCode 126)

## Code

```cpp
class Solution {
    unordered_map<string, int> dist;
    vector<vector<string>> ans;
    string bWord;

    void dfs(string word, vector<string>& path) {
        if (word == bWord) {
            vector<string> curPath = path;
            reverse(curPath.begin(), curPath.end());
            ans.push_back(curPath);
            return;
        }
        int curDist = dist[word];
        for (int i = 0; i < word.size(); i++) {
            char original = word[i];
            for (char c = 'a'; c <= 'z'; c++) {
                word[i] = c;
                if (dist.count(word) && dist[word] + 1 == curDist) {
                    path.push_back(word);
                    dfs(word, path);
                    path.pop_back();
                }
            }
            word[i] = original;
        }
    }

public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> dict(wordList.begin(), wordList.end());
        if (!dict.count(endWord)) return {};

        bWord = beginWord;
        queue<string> q;
        q.push(beginWord);
        dist[beginWord] = 0;
        dict.erase(beginWord);

        while (!q.empty()) {
            string word = q.front();
            q.pop();

            if (word == endWord) break;

            int steps = dist[word];
            string temp = word;
            for (int i = 0; i < temp.size(); i++) {
                char original = temp[i];
                for (char c = 'a'; c <= 'z'; c++) {
                    temp[i] = c;
                    if (dict.count(temp)) {
                        dist[temp] = steps + 1;
                        dict.erase(temp);
                        q.push(temp);
                    }
                }
                temp[i] = original;
            }
        }

        if (dist.count(endWord)) {
            vector<string> path = {endWord};
            dfs(endWord, path);
        }

        return ans;
    }
};
```
