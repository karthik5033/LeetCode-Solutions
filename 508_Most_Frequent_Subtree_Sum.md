# [Topic/Pattern]: Most Frequent Subtree Sum (LeetCode 508)

## Code

```cpp
class Solution {
    unordered_map<int, int> counts;
    int maxCount = 0;
public:
    int dfs(TreeNode* root) {
        if (!root) return 0;
        int sum = root->val + dfs(root->left) + dfs(root->right);
        maxCount = max(maxCount, ++counts[sum]);
        return sum;
    }
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        vector<int> result;
        for (auto& p : counts) {
            if (p.second == maxCount) {
                result.push_back(p.first);
            }
        }
        return result;
    }
};
```
