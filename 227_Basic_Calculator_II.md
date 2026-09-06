# [Topic/Pattern]: Basic Calculator II (LeetCode 227)

## Code

```cpp
class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        long currentNumber = 0;
        char operation = '+';
        int n = s.length();
        
        for (int i = 0; i < n; ++i) {
            char currentChar = s[i];
            if (isdigit(currentChar)) {
                currentNumber = currentNumber * 10 + (currentChar - '0');
            }
            if ((!isdigit(currentChar) && !isspace(currentChar)) || i == n - 1) {
                if (operation == '+') {
                    st.push(currentNumber);
                } else if (operation == '-') {
                    st.push(-currentNumber);
                } else if (operation == '*') {
                    int top = st.top();
                    st.pop();
                    st.push(top * currentNumber);
                } else if (operation == '/') {
                    int top = st.top();
                    st.pop();
                    st.push(top / currentNumber);
                }
                operation = currentChar;
                currentNumber = 0;
            }
        }
        
        int result = 0;
        while (!st.empty()) {
            result += st.top();
            st.pop();
        }
        return result;
    }
};
```
