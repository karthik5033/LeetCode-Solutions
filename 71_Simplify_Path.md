# [Topic/Pattern]: Simplify Path (LeetCode 71)

## Code

```cpp
class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        stringstream ss(path);
        string token;
        
        while (getline(ss, token, '/')) {
            if (token == "" || token == ".") {
                continue;
            }
            if (token == "..") {
                if (!st.empty()) {
                    st.pop_back();
                }
            } else {
                st.push_back(token);
            }
        }
        
        string res = "";
        for (const string& dir : st) {
            res += "/" + dir;
        }
        
        return res.empty() ? "/" : res;
    }
};
```
