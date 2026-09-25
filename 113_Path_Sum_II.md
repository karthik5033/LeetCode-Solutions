# [Topic/Pattern]: Path Sum II (LeetCode 113)

## Code

```cpp
class Solution {
public:
    void dfs(TreeNode* root, int targetSum, vector<int>& path, vector<vector<int>>& result) {
        if (!root) return;
        path.push_back(root->val);
        if (!root->left && !root->right && targetSum == root->val) {
            result.push_back(path);
        } else {
            dfs(root->left, targetSum - root->val, path, result);
            dfs(root->right, targetSum - root->val, path, result);
        }
        path.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> result;
        vector<int> path;
        dfs(root, targetSum, path, result);
        return result;
    }
};
```
