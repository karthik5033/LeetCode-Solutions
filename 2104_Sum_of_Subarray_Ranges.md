# [Topic/Pattern]: Sum of Subarray Ranges (LeetCode 2104)

## Code

```cpp
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long sumMin = 0, sumMax = 0;
        
        stack<int> st;
        vector<int> prevSmaller(n), nextSmaller(n);
        
        // Finding previous strictly smaller element
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && nums[st.top()] > nums[i]) {
                st.pop();
            }
            prevSmaller[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        
        while (!st.empty()) st.pop();
        
        // Finding next smaller or equal element
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && nums[st.top()] >= nums[i]) {
                st.pop();
            }
            nextSmaller[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        
        for (int i = 0; i < n; ++i) {
            sumMin += (long long)nums[i] * (i - prevSmaller[i]) * (nextSmaller[i] - i);
        }
        
        while (!st.empty()) st.pop();
        vector<int> prevGreater(n), nextGreater(n);
        
        // Finding previous strictly greater element
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && nums[st.top()] < nums[i]) {
                st.pop();
            }
            prevGreater[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        
        while (!st.empty()) st.pop();
        
        // Finding next greater or equal element
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && nums[st.top()] <= nums[i]) {
                st.pop();
            }
            nextGreater[i] = st.empty() ? n : st.top();
            st.push(i);
        }
        
        for (int i = 0; i < n; ++i) {
            sumMax += (long long)nums[i] * (i - prevGreater[i]) * (nextGreater[i] - i);
        }
        
        return sumMax - sumMin;
    }
};
```
